#ifndef SHARESCREENTHREAD_H
#define SHARESCREENTHREAD_H

#include <QObject>
#include <QThread>
#include <QUdpSocket>
#include <QMutex>
#include <QHostAddress>
#include <QDebug>
#include <QPixmap>
#include <QBuffer>
#include <QQueue>
#include <QDateTime>
#include <QNetworkDatagram>

class ShareScreenThread : public QThread
{
    Q_OBJECT
    void run() override;
    void handlerData();

    enum VALUEENUM{
        ShareScreen_QueueLen  = 5,
        ShareScreen_MaxLen = 2000*1024,
        ShareScreen_PrefixSize = 9,
        ShareScreen_DatagramSize = 10000,
    };

public:
    enum State{
        ShareScreen_None,
        ShareScreen_Stop,
        ShareScreen_RecvRunning,
        ShareScreen_SendRunning,
        ShareScreen_EnterStop,
    };

    explicit ShareScreenThread(QThread *parent = nullptr);
    bool startGrabWindow();
    bool stopGrabWindow();

    State state() { return m_state; }

    const QPixmap& getPixmap(bool& getOk, int &buffSize);

    QPoint getMousePos();

    void setQuality(const int value);

signals:
    void stateChange();

protected:
    void grabWindow();
    void getWindow();

private:
    State m_state;
    QUdpSocket *m_udp;
    QMutex  m_mutex;
    QHostAddress groupAddress;
    int m_runCnt;
    int m_sendByte;
    bool m_canRead;
    QPixmap pixmap;
    QQueue<QByteArray*> m_recvQueue;
    QMutex  m_pixmapMutex;
    qint64 m_preGetWindowMSec;
    QPixmap pre_sendPixmap;
    QPoint m_mousePoint;
    int m_sendQuality;
    bool m_sendOk;
};

#endif // SHARESCREENTHREAD_H
