#ifndef GET_CODE_H
#define GET_CODE_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonParseError>
#include <QJsonValue>
#include <QJsonObject>
#include <QDebug>
#include <QByteArray>
#include <QUrlQuery>
#include <QUrl>
#include <QEventLoop>
#include <QImage>
#include <QPixmap>
#include <QTimer>
class get_code : public QObject
{
    Q_OBJECT
public:
    explicit get_code(QObject *parent = nullptr);
    QByteArray GetUserClassInfo(QString u);
    QString user_code_url();
public slots:

    void codetimer_timeout();
    public:
    QTimer *codetimer;    //登录
    QString user_key;
    QString user_url;
    QString code_login_url;
    QString code_login_token;
    QString response;
//    QTimer *timer;
//    QTimer *logincodetimer;
    QPixmap code_pic;
    QString lab;
    QString userlist;
    QNetworkAccessManager networkAccessManager;
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QJsonObject jsonObject;
    QByteArray getToken;
    QString strToken;
    int Serial_num;
    QByteArray serial_check;
    QEventLoop eventLoop;
    QByteArray stulist;
    QByteArray pixda;

//      QVector<studentMsg> stuMsg;
signals:

};
//extern get_code *code;
#endif // GET_CODE_H
