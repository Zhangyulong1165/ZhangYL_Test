#ifndef WEIKESHOW_H
#define WEIKESHOW_H

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
class weikeshow : public QObject
{
    Q_OBJECT
public:
    explicit weikeshow(QObject *parent = nullptr);
QString chaeakweike();
QNetworkAccessManager networkAccessManager;
QNetworkRequest request;
QJsonObject jsonObject;
QByteArray getToken;
QString is_display_micro_lesson;
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
signals:

};

#endif // WEIKESHOW_H
