#include "sharescreenthread.h"

ShareScreenThread::ShareScreenThread(QThread *parent) : QThread(parent),
    m_state(ShareScreen_None),
    groupAddress("239.255.43.21"),
    m_runCnt(0),
    m_canRead(false),
    m_sendQuality(20)
{
    m_recvQueue.clear();
}


bool ShareScreenThread::startGrabWindow()
{
    QMutexLocker locker(&m_mutex);
    if (m_state == ShareScreen_Stop || m_state == ShareScreen_SendRunning) {
        m_state = ShareScreen_SendRunning;
        emit stateChange();
        return true;
    }
    return false;
}

bool ShareScreenThread::stopGrabWindow()
{
    QMutexLocker locker(&m_mutex);
    if (m_state == ShareScreen_SendRunning || m_state == ShareScreen_Stop) {
        m_state = ShareScreen_EnterStop;
        return true;
    }

    return false;
}
void ShareScreenThread::run()
{
    m_udp = new QUdpSocket();
    qDebug()<<"绑定:"<<m_udp->bind(QHostAddress::AnyIPv4, 44544, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
    qDebug()<<"加入:"<<m_udp->joinMulticastGroup(groupAddress);

    while(1) {

        switch (m_state) {
            case ShareScreen_None:
                m_runCnt++;
                if (m_runCnt > 100) {
                    m_state = ShareScreen_Stop;
                    m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录时间
                    emit stateChange();
                }
                msleep(10);
                if(m_udp->hasPendingDatagrams() ) {
                    m_state = ShareScreen_RecvRunning;
                    emit stateChange();
                    m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录时间
                    getWindow();
                }
                break;
            case ShareScreen_Stop:
                if(m_udp->hasPendingDatagrams()) {
                    m_state = ShareScreen_RecvRunning;
                    emit stateChange();
                    getWindow();
                }
                break;
            case ShareScreen_RecvRunning:
                getWindow();
                break;
            case ShareScreen_SendRunning:
                grabWindow();
                break;
            case ShareScreen_EnterStop:     // 由于广播,自己会受到自己消息,需要清空
                if (m_udp->hasPendingDatagrams() ) {
                    m_udp->receiveDatagram();
                } else {
                    m_state = ShareScreen_Stop;
                    emit stateChange();
                }
                break;

            default: break;
        }

    }
}
