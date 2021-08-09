#include "add_flower.h"
#include "login_widget.h"


static Add_flower *_instance = NULL;
Add_flower::Add_flower(QObject *parent) : QObject(parent)
{

}

Add_flower *Add_flower::getInstance()
{
    if(_instance == NULL)
    {
        _instance = new Add_flower;
    }
    return _instance;
}

void Add_flower::addFlower(QString cardId,int num,QString stu_ids)
{
    strToken = login->Get_Token();
    qDebug()<<"GetUserToken的strToken:"<<strToken<<endl;
    jsonObject["tbkt_token"] = strToken;
    jsonObject["stu_ids"] = stu_ids;
    jsonObject["card_ids"] = cardId;
    jsonObject["flower"] = num;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/unit/add_flower"));
    request.setRawHeader("Content-Type", "application/json");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_3);
    config.setPeerVerifyMode(QSslSocket::VerifyNone);
    request.setSslConfiguration(config);
    QNetworkReply* reply = networkAccessManager.post(request,QJsonDocument(jsonObject).toJson());
    QEventLoop eventLoop;
    QObject::connect(reply, SIGNAL(finished()), &eventLoop, SLOT(quit()));
    eventLoop.exec(); // 进入等待返回，但ui事件循环依然进行。

    if (reply->error() == QNetworkReply::NoError)
    {
        qDebug() << "request protobufHttp NoError";
    }
    else
    {
        qDebug()<<"request protobufHttp handle errors here";
        QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
        qDebug( "request protobufHttp found error ....code: %d %d\n", statusCodeV.toInt(), (int)reply->error());
        qDebug(qPrintable(reply->errorString()));
    }
    QByteArray result = reply->readAll();
    qDebug()<<"result:"<<result;
}
