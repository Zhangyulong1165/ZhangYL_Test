#ifndef GETUSERTOKEN_H
#define GETUSERTOKEN_H

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
#include <QVector>
#include <QList>
struct studentMsg
{
    int stu_id;
    QString stu_name;
    QString card_id;
    int today_num;
    int week_num;
    QString abb;
    QString firstname;
};
class GetUserToken : public QObject
{
    Q_OBJECT
public:
    explicit GetUserToken(QObject *parent = nullptr);
QString GetUserClassInfo();


public:
QString userlist;
QNetworkAccessManager networkAccessManager;
QNetworkRequest request;
QJsonObject jsonObject;
QByteArray getToken;
QString strToken;
int Serial_num;
QByteArray serial_check;
QEventLoop eventLoop;
QByteArray stulist;

QVector<studentMsg> stuMsg;

signals:

};
extern GetUserToken *getusertoken;
#endif // GETUSERTOKEN_H
