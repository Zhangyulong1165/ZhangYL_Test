#include "getusertoken.h"
#include "login_widget.h"
GetUserToken::GetUserToken(QObject *parent) : QObject(parent)
{

}
QString GetUserToken::GetUserClassInfo()
{
    stuMsg.clear();
    qDebug()<<stuMsg.size();
    strToken = login->Get_Token();

    qDebug()<<"GetUserToken的strToken:"<<strToken<<endl;
    jsonObject["tbkt_token"] = strToken;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/unit/stu_list"));
    request.setRawHeader("Content-Type", "application/json");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_0); //rc 环境TlsV1_3
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
//qDebug() << "Json文件解析错误。";
        }
        if (jsonDoc.isObject())
        {
//qDebug() << "Json文件解析成功。";
            QJsonObject object  = jsonDoc.object();
            if (object.contains("data"))
            {
                QJsonValue value = object.value("data");
                qDebug()<<"我是data**********"<<value;
                 if (value.isObject())
                 {
                     QJsonObject obj = value.toObject();
                     if (obj.contains("students_num"))
                     {
                         QJsonValue value = obj.value("students_num");
                         int students_num = value.toInt();
//qDebug() << "students_num : --------------" << students_num;
                     }
                 }
                 if (value.isObject())
                 {
                     QJsonObject obj = value.toObject();
                     /*if (obj.contains("student_list"))
                     {
                        QJsonArray array = value["student_list"].toArray();
                         int nSize = array.size();
                          for (int i = 0; i < nSize; ++i)
                          {
                              QJsonValue value = array[i];
                              studentMsg info;
                              info.stu_id = value["stu_id"].toInt();
                              info.stu_name = value["stu_name"].toString();
                              info.card_id  = value["card_id"].toString();
                              info.today_num  = value["today_num"].toInt();
                              info.week_num  = value["week_num"].toInt();
                              info.abb  = value["abb"].toString();
                              info.firstname  = value["firstname"].toString();
                              stuMsg.append(info);
                          }
                     }*/
                 }
            }

        }
        qDebug()<<"stuMsg**********"<<stuMsg.size();
                return login->Get_UserUrl();
}
