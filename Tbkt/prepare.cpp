#include "prepare.h"
#include <QSslKey>
#include <QFile>
#include <QTimer>
//#include <QtScript>
#include <QList>
#include <login_widget.h>
prepare::prepare()
{

}
QString prepare::get_prepare_url(QString lab)
{
//qDebug() << "prepare _ newtbkt_token"<<login->Get_Token();
    jsonObject["tbkt_token"] = login->Get_Token();
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/account/profile_kz")); //未备课

    request.setRawHeader("Content-Type", "application/json");
//    request.setRawHeader("catalog_id", "6");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_0);
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
//qDebug( "request protobufHttp found error ....code: %d %d\n", statusCodeV.toInt(), (int)reply->error());
//qDebug(qPrintable(reply->errorString()));
        }
    QByteArray result = reply->readAll();
//qDebug()<<"result:              "<<result;
//解析JSON
    QJsonParseError jsonError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(result, &jsonError);
    if (jsonError.error != QJsonParseError::NoError) {
//qDebug() << "Json文件解析错误。"<<endl;
        }
        if (jsonDoc.isObject()) {
            QJsonObject jsonObject = jsonDoc.object();
            QStringList keys = jsonObject.keys();
//qDebug()<<"keys*********:"<<keys;
            QJsonObject subObj = jsonObject.value("data").toObject();
//qDebug()<<"subObj*********:"<<subObj;
//            QJsonObject student_list = jsonObject.value("student_list").toObject();
//qDebug() << "subObj:" << subObj;
//qDebug() << "student_list:" << subObj.value("student_list").toString();
                           lab = subObj.value(lab).toString();
                           QString bol = subObj.value(lab).toString();
//qDebug()<<"lab*********:"<<lab;
}
        return lab;
}
