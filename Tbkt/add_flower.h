#ifndef ADD_FLOWER_H
#define ADD_FLOWER_H

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

class Add_flower : public QObject
{
    Q_OBJECT
public:
    explicit Add_flower(QObject *parent = nullptr);

signals:


private:
    QNetworkAccessManager networkAccessManager;
    QNetworkRequest request;
    QJsonObject jsonObject;
    QByteArray getToken;
    QString strToken;

public:
    static Add_flower* getInstance();


public:
    void addFlower(QString cardId, int num, QString stu_ids);

};

#endif // ADD_FLOWER_H
