#include "login_widget.h"
#include "ui_login_widget.h"
#include <tbkt_widget.h>
#include <QMessageBox>
#include <QTextCodec>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonParseError>
#include <QJsonValue>
#include <QJsonObject>
#include <iostream>
#include <QString>
#include <QDebug>
#include <iterator>
#include <QRegExp>
#include <QRegExpValidator>
#include <QBitmap>
#include "tbkt_widget.h"
#include "get_code.h"
#include <QLabel>
#include <QPainter>
QString temp1;
#pragma execution_character_set("utf-8")
Login_widget::Login_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login_widget)
{
    ui->setupUi(this);
    getcode.GetUserClassInfo("code_key");
    warning_label = new QLabel(this);
    setWindowFlags(Qt::FramelessWindowHint);
 //   ui->label->adjustSize();
//    ui->label_2->adjustSize();
    //设置关于窗体为圆角
    QBitmap bmp(this->size());
    bmp.fill();
    QPainter p(&bmp);
    p.setPen(Qt::NoPen);
    p.setBrush(Qt::black);
    p.drawRoundedRect(bmp.rect(),20,20);
    setMask(bmp);

    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    loginMovieShow();
    this->setAttribute(Qt::WA_TranslucentBackground);
    //登录界面的提示字符
    //    ui->lineEdit_User->setText("13600000000");
    login_movie_timer = new QTimer(this);
    mytimer = new QTimer(this);
    codelogintimer = new QTimer(this);
    pctimer = new QTimer(this);
    warning_timer = new QTimer(this);
    mytimer->setInterval(180000);
    codelogintimer->setInterval(1000);
    //    codetimer->start();
    connect(mytimer,SIGNAL(timeout()),this,SLOT(mytimer_timeout()));
    connect(codelogintimer,SIGNAL(timeout()),this,SLOT(codelogintimer_timeout()));
    connect(login_movie_timer,SIGNAL(timeout()),this,SLOT(loginMovie_timeout()));
    connect(warning_timer,SIGNAL(timeout()),this,SLOT(warning_timer_timeout()));
    //    connect(ui->pushButton_Login,&QPushButton::clicked,tbkt,&Tbkt_Widget::denglu);
    initWindow();
}
void Login_widget::pctimer_timeout()
{
    qDebug()<<"1111111111111111111111111111111111111111111111111111";
    QJsonObject jsonObject;
    jsonObject["key"] = getcode.user_key;
    qDebug()<<"jsonObject"<<jsonObject;
    QNetworkAccessManager manager;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn"));
    request.setRawHeader("Content-Type", "application/json");
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_0);
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

        qDebug() << "Login_widget的temptoken:" << temptoken<<endl;
        code_newUrl = tempurl;
        qDebug() << "newUrl:" << code_newUrl;
        newtbkt_token = temptoken;
        qDebug()<<"code_token********"<<newtbkt_token;
        pctimer->start();
        connect(pctimer,SIGNAL(timeout()),this,SLOT(pctimer_timeout()));
        pctimer->setInterval(2000);
        if(!NULL == temptoken)
        {
            pctimer->stop();
        }
        qDebug()<<"w我是pctimer";
        qDebug()<<"1111111111111111111111111111111111111111111111111111";
    }
}
void Login_widget::codelogintimer_timeout()
{

    if(NULL == getcode.code_login_url)
    {
        getcode.user_code_url();
    }
    else     {

        qDebug()<<"我是扫码登录的网址"<<getcode.code_login_url;
        tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",getcode.code_login_url);
        tbkt->showMaximized();
    qDebug()<<"1111111111"<<getcode.user_key;
        getcode.user_key = nullptr;
        qDebug()<<"2222222222222"<<getcode.user_key;
        this->close();
        codelogintimer->stop();
    }


}
Login_widget::~Login_widget()
{
    delete ui;
}


void Login_widget::initWindow()
{
    mytimer->start();
    codelogintimer->start();
    ui->tabWidget->setCurrentWidget(ui->tab);
    //    getcode.GetUserClassInfo();
    QPixmap pixmap;
    //    pixmap.loadFromData();
    //    qDebug()<<"GetUserClassInfo"<<getcode.GetUserClassInfo();
    pixmap.loadFromData(getcode.GetUserClassInfo("code_key"));
    //    ui->pushButton_matu->setIcon(pixmap);//按钮绑定图片
    //    ui->pushButton_matu->setIcon(pixmap);//按钮绑定图片
    //    ui->pushButton_matu->setIconSize(QSize(200,200)); //设置图片大小
    ui->pushButton_matu->setVisible(false);
    pixmap = pixmap.scaled(ui->label_matu->size());
    ui->label_matu->setPixmap(pixmap);

    //输入密码检测6--16位
    QRegExp regExp2("[0-9]{1,16}");
    QRegExpValidator *pRegExpValidator2 = new QRegExpValidator(regExp2,this);
    ui->lineEdit_Pwd->setValidator(pRegExpValidator2);
    //输入手机号匹配11位
    QRegExp re("^(13[0-9]|14[579]|15[0-3,5-9]|16[6]|17[0135678]|18[0-9]|19[89])\\d{8}$");
    QRegExpValidator *pRegExpValidator1 = new QRegExpValidator(re,this);
    //暗注释;
    ui->comboBox_user->setEditable(true);
    QLineEdit* lineEdit = ui->comboBox_user->lineEdit();
    lineEdit->setValidator(pRegExpValidator1);
    lineEdit->setPlaceholderText("请输出手机号");
    //输入默认的账号密码
    lineEdit->setText("13600000000");
    ui->lineEdit_Pwd->setText("111111");
    lineEdit->setFocus();
    ui->lineEdit_Pwd->setPlaceholderText("请输入6-16位密码");
    //登陆为灰色
    //    if(NULL == lineEdit->text())
    //    {
    //        ui->pushButton_Login->setEnabled(false);
    //        ui->pushButton_Login->setStyleSheet("QPushButton{background-color:rgb(200,200,200);}");
    //    }
    //    else {
    //        ui->pushButton_Login->setEnabled(true);
    //    }
}
QString Login_widget::Get_UserUrl()
{
    if(NULL == newUrl)
    {
        qDebug() <<"我是扫码登录的url"<<getcode.code_login_url;
        return getcode.code_login_url;
    }
    else {
        return newUrl;
    }
}

void Login_widget::open_saomadenglu()
{
    mytimer->start();
    codelogintimer->start();
    ui->tabWidget->setCurrentWidget(ui->tab);
}

void Login_widget::updata_erweima()
{
    on_pushButton_matu_clicked();

    codelogintimer->start();
}
QString Login_widget::Get_Token()
{
    if(NULL == newtbkt_token)
    {
        qDebug() <<"扫码登录的token"<<getcode.code_login_token;
        return getcode.code_login_token;
    }
    else {
        qDebug() <<"账号密码的token"<<newtbkt_token;
        return newtbkt_token;

    }

}
QString Login_widget::JsonToQstring(QJsonObject jsonObject)
{
    return QString(QJsonDocument(jsonObject).toJson());
}
//时间更新二维码
void Login_widget::mytimer_timeout()
{
    ui->pushButton_matu->setVisible(true);
    //    ui->pushButton_matu->setIcon(QIcon(":/new/prefix1/Images/refresh.png"));
    //    ui->pushButton_matu->setIconSize(QSize(200,200)); //设置图片大小

    //   QPixmap pix(":/new/prefix1/Images/refresh.png");
    //   ui->label_matu->setMaximumSize(200, 200);
    //   ui->label_matu->setPixmap(pix);
    //   ui->label_matu->setScaledContents(true);
    ui->label->setText("二维码已失效，点击刷新");
    mytimer->stop();

}
//登录按钮的槽函数
void Login_widget::on_pushButton_Login_clicked()
{
    if(true == Denglujiance())
    {
        ui->stackedWidget_tab->setCurrentWidget(ui->page);
        login_movie_timer->start(1000);
        //        tbkt->showFullScreen();
        codelogintimer->stop();
    }
    else
    {
        qDebug("登录失败");
    }
}

bool Login_widget::Denglujiance()
{
    QString username = ui->comboBox_user->lineEdit()->text().toUtf8();
    usertell = username;
    //加密转码user
    QString base64name = username.toUtf8().toBase64();
    QString password = ui->lineEdit_Pwd->text();
    //加密转码pwd
    QString base64pwd = password.toUtf8().toBase64();
    //输入检测
    if(username.length() < 11)
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::red);//设置颜色
        warning_label ->setPalette(pe);
        QFont font;
        font.setPointSize(10);//字体大小
        warning_label ->setFont(font);//其他控件一样
        warning_label->move(0,410);
        warning_label->setText("手机号不足十一位，请重新输入");
        warning_label->resize(500,40);
        warning_label->setAlignment(Qt::AlignCenter);
//                warning_label->setAutoFillBackground(true);
        warning_label->show();
        warning_timer->start(3000);
        ui->comboBox_user->lineEdit()->clear();
        ui->lineEdit_Pwd->clear();
        ui->comboBox_user->lineEdit()->setFocus();
        return 0;
    }
    if(password.length() < 6)
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText, Qt::red);//设置颜色
        warning_label ->setPalette(pe);
        QFont font;
        font.setPointSize(10);//字体大小
        warning_label ->setFont(font);//其他控件一样
        warning_label->move(0,410);
        warning_label->setText("密码小于6位，请重新输入");
        warning_label->resize(500,40);
        warning_label->setAlignment(Qt::AlignCenter);
//                warning_label->setAutoFillBackground(true);
        warning_label->show();
        warning_timer->start(3000);
        ui->comboBox_user->lineEdit()->clear();
        ui->lineEdit_Pwd->clear();
        ui->comboBox_user->lineEdit()->setFocus();
        return 0;
    }
    if(username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this,"Warning","手机号或者密码不能为空",QMessageBox::Yes);
        ui->comboBox_user->lineEdit()->clear();
        ui->lineEdit_Pwd->clear();
        ui->comboBox_user->lineEdit()->setFocus();
        return 0;
    }

    else
    {
        QJsonArray jsonArray;
        QJsonObject jsonObject;
        jsonObject["phone"] = base64name;
        jsonObject["password"] = base64pwd;
        jsonObject["array"] = jsonArray;
        QNetworkAccessManager manager;
        QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/account/login"));
        request.setRawHeader("Content-Type", "application/json");
        QSslConfiguration config = QSslConfiguration::defaultConfiguration();
        config.setProtocol(QSsl::TlsV1_0);
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
            //qDebug() << "Json文件解析错误。";
            return 0;
        }
        if (jsonDoc.isObject())
        {
            QString temptoken;
            QString tempurl;
            QJsonObject jsonObject = jsonDoc.object();
            //            qDebug()<<"jsonObject:"<<jsonObject;
            QStringList keys = jsonObject.keys();
            qDebug() << "key" << keys;
            QString response = jsonObject.value("response").toString();
            if(response == "ok"){
                QJsonObject subObj = jsonObject.value("data").toObject();
                tempurl = subObj.value("next_url").toString();
                temptoken = subObj.value("tbkt_token").toString();
                newUrl = tempurl;
                qDebug() << "newUrl" << newUrl;
                newtbkt_token = temptoken;
                //主界面网页加载

//                tbkt->Tbkt_view->load(QUrl(newUrl));
                //                tbkt->showFullScreen();
            }else{
                QString message = jsonObject.value("message").toString();
                QPalette pe;
                pe.setColor(QPalette::WindowText, Qt::red);//设置颜色
                warning_label ->setPalette(pe);
                QFont font;
                font.setPointSize(10);//字体大小
                warning_label ->setFont(font);//其他控件一样
                warning_label->move(0,410);
                warning_label->setText(message);
                warning_label->resize(500,40);
                warning_label->setAlignment(Qt::AlignCenter);
//                warning_label->setAutoFillBackground(true);
                warning_label->show();
                warning_timer->start(3000);
                ui->comboBox_user->lineEdit()->clear();
                ui->lineEdit_Pwd->clear();
                ui->comboBox_user->lineEdit()->setFocus();
                return 0;
            }

        }
        return 1;
    }
}

void Login_widget::on_pushButton_erweima_clicked()
{

    //    ui->pushButton_matu->setEnabled(false);
}
void Login_widget::on_pushButton_ma_clicked()
{
    //    ui->stackedWidget_login->setCurrentWidget(ui->stackedWidget_loginPage2);
}

void Login_widget::on_pushButton_back_clicked()
{
    //    ui->stackedWidget_login->setCurrentWidget(ui->stackedWidget_loginPage1);
}

void Login_widget::on_pushButton_login_zxh_clicked()
{
    this->showMinimized();
}

void Login_widget::on_pushButton_login_gb_clicked()
{
    this->close();
}

void Login_widget::on_pushButton_matu_clicked()
{
    QPixmap pixmap;
    pixmap.loadFromData(getcode.GetUserClassInfo("code_key"));
    // ui->pushButton_matu->setIcon(pixmap);//按钮绑定图片
    ui->pushButton_matu->setVisible(false);
    pixmap = pixmap.scaled(ui->label_matu->size());
    ui->label_matu->setPixmap(pixmap);
    ui->label_matu->show();
    ui->label->setText("同步课堂教师APP扫码登陆");
    mytimer->start();
}

void Login_widget::warning_timer_timeout()
{
    warning_label->setText(nullptr);
    warning_timer->stop();
}

void Login_widget::loginMovie_timeout()
{
    ui->stackedWidget_tab->setCurrentWidget(ui->stackedWidget_tabPage1);
    this->close();
    tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(newUrl));
    tbkt->showFullScreen();
    login_movie_timer->stop();
}
void Login_widget::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        ui->pushButton_Login->clicked();
    }
}

void Login_widget::on_tabWidget_tabBarClicked(int index)
{

}

void Login_widget::closeEvent(QCloseEvent *)
{

}

void Login_widget::loginMovieShow()
{
    login_movie = new QMovie(":/new/prefix1/Images/login.gif");
    ui->label_6->setMovie(login_movie);
    login_movie->start();

}
