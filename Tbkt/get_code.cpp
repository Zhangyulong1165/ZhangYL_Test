#include "get_code.h"
#include <QImage>
#include <QPixmap>
get_code::get_code(QObject *parent) : QObject(parent)
{

}
QByteArray get_code::GetUserClassInfo(QString u)
{
    //    timer = new QTimer(this);
    //    logincodetimer = new QTimer(this);
    //    strToken = login->Get_Token();
    qDebug()<<"GetUserToken的strToken:"<<strToken<<endl;
    jsonObject["tbkt_token"] = strToken;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/account/get_code"));
    request.setRawHeader("Content-Type", "application/json");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_3);
    config.setPeerVerifyMode(QSslSocket::VerifyNone);
    request.setSslConfiguration(config);
    QNetworkReply* reply = networkAccessManager.post(request,QJsonDocument(jsonObject).toJson());

    QEventLoop eventLoop;
    QObject::connect(reply, SIGNAL(finished()), &eventLoop, SLOT(quit()));
    eventLoop.exec(); // 进入等待返回，但ui事件循环依然进行。

    if (reply->error() == QNetworkReply::NoError) {
        //qDebug() << "request protobufHttp NoError";
    }
    else{
        //qDebug()<<"request protobufHttp handle errors here";
        QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
        //statusCodeV是HTTP服务器的相应码，reply->error()是Qt定义的错误码，可以参考QT的文档
        //qDebug( "request protobufHttp found error ....code: %d %d\n", statusCodeV.toInt(), (int)reply->error());
        //qDebug(qPrintable(reply->errorString()));
    }
    QByteArray result = reply->readAll();
    //qDebug()<<"result:"<<result;
    //解析JSON
    QJsonParseError jsonError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(result, &jsonError);
    if (jsonError.error != QJsonParseError::NoError) {
        //qDebug() << "Json文件解析错误。"<<endl;
    }
    if (jsonDoc.isObject()) {
        QJsonObject jsonObject = jsonDoc.object();
        QStringList keys = jsonObject.keys();
        qDebug()<<"keys*********:"<<keys;
        QJsonObject subObj = jsonObject.value("data").toObject();
        qDebug()<<"subObj*********:"<<subObj;
        //            QJsonObject student_list = jsonObject.value("student_list").toObject();
        //qDebug() << "subObj:" << subObj;
        //qDebug() << "student_list:" << subObj.value("student_list").toString();
        QString codeurl = subObj.value(u).toString();

        qDebug()<<"codeurl*********:"<<codeurl;
        QUrl url(codeurl);
        QEventLoop loop;
        QNetworkReply *code_reply = manager.get(QNetworkRequest(url));
        QObject::connect(code_reply, SIGNAL(finished()), &loop, SLOT(quit()));
        loop.exec();
        QByteArray codedata = code_reply->readAll();
        qDebug()<<"codedata*********:"<<codedata;
        pixda = codedata;

        QPixmap image;
        image.loadFromData(codedata);
        qDebug()<<"image*********:"<<image;
        code_pic = image;
        QString code_key = subObj.value("key").toString();
        qDebug()<<"code_key*********:"<<code_key;
        user_key = code_key;

        QString code_url = subObj.value("url").toString();
        qDebug()<<"url*********:"<<code_url;
        user_url = code_url;

        lab = subObj.value(lab).toString();
        QString bol = subObj.value(lab).toString();
        //qDebug()<<"lab*********:"<<lab;

        //                               user_code_url(code_key);
        codetimer = new QTimer;
        codetimer->setInterval(8000);
        //                                   codetimer->start();
        //                                   connect(codetimer,SIGNAL(timeout()),this,SLOT(codetimer_timeout()));
    }
    return pixda;
}
void get_code::codetimer_timeout()
{
    //    user_code_url(user_key);
    if("ok" == response)
    {
        qDebug()<<"codetimer_timeout()response"<<response;

        if(codetimer->isActive()){
            codetimer->stop();
        }
    }
}
QString get_code::user_code_url()
{
    qDebug()<<"**********************************";
    QJsonObject jsonObject;
    jsonObject["key"] = user_key;
    qDebug()<<"jsonObject===code"<<jsonObject;
    QNetworkAccessManager manager;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/account/pc_login"));
    request.setRawHeader("Content-Type", "application/json");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_3);
    config.setPeerVerifyMode(QSslSocket::VerifyNone);
    request.setSslConfiguration(config);
    QNetworkReply* reply = manager.post(request,QJsonDocument(jsonObject).toJson());
    QEventLoop eventLoop;
    QObject::connect(reply, SIGNAL(finished()), &eventLoop, SLOT(quit()));
    eventLoop.exec(); // 进入等待返回，但ui事件循环依然进行。
    QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    QByteArray result = reply->readAll();
    qDebug()<<"result:"<<result;
    //解析JSON
    QJsonParseError jsonError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(result, &jsonError);
    if (jsonError.error != QJsonParseError::NoError)
    {
        qDebug() << "Json文件解析错误。";
    }
    if (jsonDoc.isObject())
    {
        QString temptoken;
        QString tempurl;
        QJsonObject jsonObject = jsonDoc.object();
        qDebug()<<"jsonObject:"<<jsonObject;
        QStringList keys = jsonObject.keys();
        qDebug() << "key" << keys;
        QJsonObject subObj = jsonObject.value("data").toObject();
        tempurl = subObj.value("next_url").toString();
        temptoken = subObj.value("tbkt_token").toString();

        QString response = jsonObject.value("response").toString();
        code_login_url = tempurl;
        qDebug() << "Login_widget的temptoken:" << temptoken<<endl;
        code_login_token = temptoken;

        //        code_newUrl = tempurl;
        //    qDebug() << "newUrl:" << code_newUrl;
        //        newtbkt_token = temptoken;
        //    qDebug()<<"code_token********"<<newtbkt_token;
        //        pctimer->start();
        //        connect(pctimer,SIGNAL(timeout()),this,SLOT(pctimer_timeout()));
        //            pctimer->setInterval(2000);


        qDebug()<<"user_url1"<<code_login_url;
        qDebug()<<"################################################";
    }
//    user_key = nullptr;
    return code_login_url;
}

