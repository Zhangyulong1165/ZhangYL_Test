#include "sharescreenthread.h"
#include <QGuiApplication>
#include <QScreen>
#include <QImageReader>
#include <QCursor>

void ShareScreenThread::setQuality(const int value)
{
    m_sendQuality = value;
}

QPoint ShareScreenThread::getMousePos()
{
    return m_mousePoint;
}

const QPixmap& ShareScreenThread::getPixmap(bool& getOk, int& buffSize)
{
    if (m_state == ShareScreen_SendRunning) {
        buffSize = m_sendByte;
        getOk = m_sendOk;
        m_sendOk = false;
        return pixmap;
    } else {
        if (!m_recvQueue.size())
            return pixmap;

        QMutexLocker locker(&m_pixmapMutex);
        QByteArray* pByte  = m_recvQueue.dequeue();
        pixmap.loadFromData((uchar *)pByte->data(), pByte->length());

        buffSize = pByte->length();
        delete pByte;
        getOk =true;

        return pixmap;
    }

}



void ShareScreenThread::grabWindow()
{
    static char buf[ShareScreen_DatagramSize+ShareScreen_PrefixSize + 10];
    QMutexLocker locker(&m_mutex);
    QScreen *screen = QGuiApplication::primaryScreen();
    pixmap = screen->grabWindow(0);


    QByteArray ba_pic;
    ba_pic.resize(0); //清除空间
    QBuffer bf(&ba_pic);
    if (pixmap.save(&bf, "jpg",m_sendQuality))
    {
        int cnt = ba_pic.size() / ShareScreen_DatagramSize;
        cnt += bf.data().size() % ShareScreen_DatagramSize !=0 ? 1 : 0;
        int size = bf.data().size();
        QPoint point = QCursor::pos();
        m_sendByte = size;
        buf[0] = 'J';
        buf[1] = 'P';
        buf[2] = 'G';
        buf[3] = cnt;
        buf[4] = 0;
        buf[5] = (((unsigned int)point.x() )>> 8 )&0xFF ;
        buf[6] = ((unsigned int)point.x())&0xFF;
        buf[7] = (((unsigned int)point.y() )>> 8 )&0xFF ;
        buf[8] = ((unsigned int)point.y())&0xFF;
        int offset = 0;
        while(size>0) {
            int sendLen = ShareScreen_DatagramSize;
            if (size < ShareScreen_DatagramSize) {
                sendLen = size;
                size = 0;
            } else {
                size -= ShareScreen_DatagramSize;
            }
            memcpy(buf+ShareScreen_PrefixSize, bf.data().data()+offset, sendLen);
            m_udp->writeDatagram(buf, sendLen+ShareScreen_PrefixSize, groupAddress,44544);
            m_udp->waitForBytesWritten();
            usleep(100);
            buf[4]+=1;
            offset+=sendLen;
        }
    }
    m_sendOk = true;
}


void ShareScreenThread::getWindow()
{
    static char allBuf[ShareScreen_MaxLen];
    static char buf[ShareScreen_DatagramSize + ShareScreen_PrefixSize + 10];
    static int preCnt = -1;

    while (m_state == ShareScreen_RecvRunning) {
        if (m_udp->hasPendingDatagrams()) {
            buf[0] = '0';
            buf[1] = '0';
            buf[2] = '0';
            int ret = m_udp->readDatagram(buf, ShareScreen_DatagramSize+ShareScreen_PrefixSize);      // 读取
            buf[ret] = 0;
            m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();
            int currentCnt = 0,cnt = 0;
            if (buf[0]== 'J' && buf[1]== 'P' && buf[2]== 'G') {
                cnt = (int)buf[3];
                currentCnt = (int)buf[4];
                if (currentCnt == 0) {
                    preCnt = -1;
                    m_mousePoint.setX((unsigned char)buf[5]<<8 | (unsigned char)buf[6]);
                    m_mousePoint.setY((unsigned char)buf[7]<<8 | (unsigned char)buf[8]);
                }

                if (currentCnt - preCnt == 1) {
                    memcpy(allBuf+currentCnt*ShareScreen_DatagramSize, buf+ShareScreen_PrefixSize, ret-ShareScreen_PrefixSize);
                    preCnt = currentCnt;

                    if (currentCnt == cnt - 1) {
                        allBuf[currentCnt * ShareScreen_DatagramSize + ret-ShareScreen_PrefixSize] = 0;
                       // qDebug()<<"getImageOk LEN:"<<m_recvQueue.size()<<currentCnt * ShareScreen_DatagramSize + ret-ShareScreen_PrefixSize<< m_recvQueue.size()<<currentCnt<<cnt<<ret;

                        if (m_recvQueue.size() >= ShareScreen_QueueLen)
                            continue;
                        m_pixmapMutex.lock();
                        QByteArray *pByte = new QByteArray(allBuf,currentCnt * ShareScreen_DatagramSize + ret - ShareScreen_PrefixSize);
                        m_recvQueue.enqueue(pByte);
                        m_pixmapMutex.unlock();
                    }

                } else {
                    qDebug()<<"丢包了  "<<currentCnt<<preCnt<<cnt<<ret;
                    preCnt = -1;
                }
            }

        } else {
            if (QDateTime::currentDateTime().toMSecsSinceEpoch() - m_preGetWindowMSec > 1000) {
                m_state = ShareScreen_Stop;
                emit stateChange();
            }
        }
    }


}
