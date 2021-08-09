#ifndef PREPARE_H
#define PREPARE_H

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
class prepare
{
public:
    prepare();
    QString get_prepare_url(QString lab); //lab是点击的中间按钮

private:
    QNetworkAccessManager networkAccessManager;
    QNetworkRequest request;
    QJsonObject jsonObject;
    QByteArray getToken;

    QString prepare_lessons_page; //备课页面url，带token
    QString textbook_page;  //课本页面url，带token
    QString micro_lesson_page; //微课页面url，带token
    QString task_comment_page;  //作业点评页面url，带token


    int Serial_num;
    QByteArray serial_check;
    QEventLoop eventLoop;
    QByteArray stulist;
    QJsonArray arrayToken;
    QString arraytostr;
};

#endif // PREPARE_H
