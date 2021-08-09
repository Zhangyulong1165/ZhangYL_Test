#include "beikeppt.h"
#include "tbkt_widget.h"
#include <QtNetwork>
#include <QFile>
#include <QDebug>
#pragma execution_character_set("utf-8")
BeiKePpt::BeiKePpt(QObject *parent) : QObject(parent)
{
 //   Tbkt_Widget *tbkt_1 = new Tbkt_Widget;
    manager = new QNetworkAccessManager(this);
//    connect(this,SIGNAL(openBeikeppt(QString)),tbkt,SLOT(open(QString)));
}
void BeiKePpt::startRequest(QUrl url)
{
     qDebug()<<"进入startRequest";
     qDebug()<<"进入startRequest"<<url;
    reply = manager->get(QNetworkRequest(url));
    connect(reply,&QNetworkReply::readyRead,this,&BeiKePpt::httpReadyRead);
//    connect(reply,&QNetworkReply::downloadProgress,this,&BeiKePpt::updateDataReadProgress);
    connect(reply,&QNetworkReply::finished,this,&BeiKePpt::httpFinished);
}

void BeiKePpt::httpReadyRead()
{
    qDebug()<<"进入httpReadyRead";
    if (file) {
        file->write(reply->readAll());
        qDebug()<<"进入If";
    }
}

void BeiKePpt::updateDataReadProgress(qint64 bytesRead,qint64 totalBytes)
{
//    ui->progressBar->setMaximum(totalBytes);
//    ui->progressBar->setValue(bytesRead);
}

void BeiKePpt::httpFinished()
{
 //   ui->progressBar->hide();
    if (file) {
        file->close();
        delete file;
        file = nullptr;
    }
    reply->deleteLater();
    reply = 0;
    qDebug()<<"文件名："<<pptfile_b;
    tbkt->open("./"+ pptfile_b);
//    emit openBeikeppt(pptfile_b);
}

void BeiKePpt::pushButton_clicked(QUrl ppturl)
{
    qDebug()<<"*******正在下载********";
    qDebug()<<ppturl;
 //   url = ui->lineEdit->text();
    QFileInfo info(ppturl.path());

    QString fileName(info.fileName());
    qDebug()<<fileName;
    pptfile_b = fileName;
    if (fileName.isEmpty()) {
        fileName = "index.html";
    }
    file = new QFile(fileName);
    if (!file->open(QIODevice::WriteOnly)) {
        qDebug()<<"*******111111********";
        delete file;
        file = 0;
        return;
    }
    startRequest(ppturl);

 //   ui->progressBar->setValue(0);
 //   ui->progressBar->show();
}
