#include "tbkt_widget.h"
#include "ui_tbkt_widget.h"
#include "settingform.h"
#include "login_widget.h"
#include "getusertoken.h"
#include <QStyle>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QStackedLayout>
#include <QWebChannel>
#include <QNetworkProxyQuery>
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")
Tbkt_Widget::Tbkt_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tbkt_Widget)
{
    ui->setupUi(this);
    paihang_change = true;
//    this->setWindowOpacity(0.5);//所有的东西全都设置为了半透明
    showAWindow_falg = false;
    tips_label = new QLabel(this);
    tips_label->close();
    label_biaoyang = new QLabel(this);
        label_biaoyang->close();
    tipstimer = new QTimer(this);
    label_biaoyang_timer = new QTimer;
    ziyuan_timer = new QTimer(this);
    ziyuan = new ziyuan_Form();
    jushou = new jushou_Dialog();
    qiangda = new qiangda_Dialog();
    hudong = new hudong_Dialog();
    tiwen = new TiWen_Dialog();
    huaban = new huaban_Form();
    huabi = new huabi_Form();
    beikeppt = new BeiKePpt;
    paihang = new paihang_Form(this);
    _excelview = new QAxWidget(ui->widget_tbkt_tool);
    //    _excelview = NULL;
    this->setWindowFlags(Qt::FramelessWindowHint);

    QNetworkProxyFactory::setUseSystemConfiguration(false);
    jishi = new jishi_Form();
    Tbkt_view = new QAxWidget(ui->widget_webview);
    Tbkt_view->resize(ui->widget_webview->size());
    webChannel = new QWebChannel;
    webjsobj = new JsCall();
    webChannel->registerObject("webJsObj", webjsobj);
//    Tbkt_view-> ->setWebChannel(webChannel);
    //connect(webjsobj,SIGNAL());

    //   jushou = NULL;

    //qDebug()<<"nexturl:"<<login->Get_UserUrl();
    //qDebug()<<"nexturl:"<<login->newUrl;
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
//    QWebEnginePage * page = Tbkt_view->page();
//    connect(page, SIGNAL(loadStarted()), this, SLOT(doLoad()));
    //****************************信号量
    connect(this, SIGNAL(sendJushouShow()),jushou,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendQiangdaShow()),qiangda,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendHudongShow()),hudong,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendTiwenShow()),tiwen,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendJishiShow()),jishi,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendHuabanShow()),huaban,SLOT(set_showflag_true()));
    connect(this, SIGNAL(sendPaihangShow()),paihang,SLOT(set_showflag_true()));

    connect(ui->pushButton_setting, &QPushButton::clicked, this, &Tbkt_Widget::openSettingWindow); //信号绑定，当发出此信号后，配置窗口位于最前
    connect(this, SIGNAL(sendHudongShow()), hudong, SLOT(StartStopwatch()));
    connect(webjsobj, SIGNAL(weikeShow()), this, SLOT(weikes()));//微课槽函数
    connect(this,SIGNAL(sendHuabiOpen()),huabi,SLOT(open_huabu()));
    connect(tipstimer,SIGNAL(timeout()),this,SLOT(tipstimer_out()));
        connect(label_biaoyang_timer,SIGNAL(timeout()),this,SLOT(label_biaoyang_timer_out()));
    //zhangxj
    mpShadeWindow = new QWidget(ui->widget_tbkt_tool);
    QString str("QWidget{background-color:rgba(0,0,0,0.1);}");
    mpShadeWindow->setStyleSheet(str);
    mpShadeWindow->setGeometry(0, 0, 1, 1);
    mpShadeWindow->hide();
}
void Tbkt_Widget::doLoad()
{
//    QUrl url = Tbkt_view->page()->requestedUrl();
//    qDebug()<<"doLoad…"<<url;
//    /*解析URL*/
//    parseURL(url);
}
void Tbkt_Widget::parseURL(QUrl url)
{
    QString urlStr0 = "chapter";    //切换章节
    QString urlStr1 = "prepare";    //使用课程
    QString urlStra = "preview";
    QString urlStrb = "taskRem";   //作业点评
    QString urlStrc = "microCl";   //微课
    QString urlStrd = "textBoo";   //课本

    QString urlStr2;    //切割出班级或者章节
    QString urlStr3;    //切割出班级或者章节
    urlStr3 = url.toString();    //当前网页Qstring
    urlStr2 = urlStr3.mid(24,7);
    if(urlStr0 == urlStr2 )
    {
        urlStr = urlStr3;
        qDebug()<<urlStr;
    }
    if(urlStr2 == urlStr1 || urlStra == urlStr2 || urlStrb == urlStr2 || urlStrc == urlStr2 || urlStrd == urlStr2 )
    {
        ui->widget_tbkt_tool->setVisible(true);
        qDebug("tool显示");
        qDebug()<<urlStr2;
    }
    else{
        ui->widget_tbkt_tool->setVisible(false);
        qDebug("tool隐藏");
        qDebug()<<urlStr2;
    }
    //if("wd" == webjsobj->Ppt_urlmsgtype)
    //{
    //    beikeppt->pushButton_clicked(webjsobj->Ppt_url);
    //    qDebug()<<"下载PPt ……";

    /*
     * 因为每次调用load都会触发loadStarted信号而执行该方法，
     * 所以必须保证load网页时不会解析URL，否则load不到网页。
     */
    //    if(urlStr.right(5).operator!=(QString(".html")))
    //    {
    //        int len = urlStr.length();
    //qDebug()<<"”urlStr.length():”"<<len;
    //        QString ret = urlStr.right(len-24);
    //qDebug()<<"”Start Parse Url:”"<<ret;
    //        if(ret.operator == (QString("print")));

    //        {
    //qDebug()<<"”Call Moudle Of Print”";



    //            /*如果找不到该url，app exited with code -1073741819*/

    //            Tbkt_view->load(QUrl("“../b.html”"));

    //        }

    //    }
}
Tbkt_Widget::~Tbkt_Widget()
{
    delete ui;
}

void Tbkt_Widget::label_biaoyang_show()
{
    label_biaoyang->setWindowFlags(Qt::FramelessWindowHint);
    label_biaoyang->setAttribute(Qt::WA_TranslucentBackground);
    label_biaoyang->setStyleSheet("QLabel{color:#ffffff;background-color:rgba(0,0,0,0.5);}");
    label_biaoyang->setPixmap(QPixmap(":/new/prefix1/Images/good.png"));
//    QDesktopWidget *desktop = QApplication::desktop();
    label_biaoyang->move(600,150);
    label_biaoyang->adjustSize();
    label_biaoyang->show();
    label_biaoyang_timer->start(3000);
}

void Tbkt_Widget::tips_label_text(QString str)
{
    tips_label->setText(str);
    tips_label->setWindowFlags(Qt::FramelessWindowHint);
//    tips_label->setAttribute(Qt::WA_TranslucentBackground);
    tips_label->setStyleSheet("QLabel{font-family:Microsoft YaHei;font-size: 22px;color:#ffffff;background-color:rgba(0,0,0,210);"
                              "border-style: solid;border-width: 2px;border-color:rgba(0,0,0,210);border-radius: 20px;}");
    QFontMetrics fm(this->font());
    int width = fm.width(str)*2.5;
//    tips_label->adjustSize();
    tips_label->setFixedWidth(width);
    tips_label->setFixedHeight(60);

    QDesktopWidget *desktop = QApplication::desktop();
    tips_label->move(desktop->width()/2 - 100,850);
    tips_label->setText(str);
    tips_label->setAlignment(Qt::AlignHCenter| Qt::AlignVCenter);
    tips_label->show();
    tipstimer->start(1000);
}

void Tbkt_Widget::btn_true()
{
    ui->pushButton_setting->setEnabled(true);
    ui->pushButton_dianming->setEnabled(true);
    ui->pushButton_qiangda->setEnabled(true);
    ui->pushButton_hudong->setEnabled(true);
    ui->pushButton_beike->setEnabled(true);
    ui->pushButton_keben->setEnabled(true);
    ui->pushButton_dianping->setEnabled(true);
    ui->pushButton_weike->setEnabled(true);
    ui->pushButton_tiwen->setEnabled(true);
    ui->pushButton_jishi->setEnabled(true);
    ui->pushButton_dianping->setEnabled(true);
    ui->pushButton_paihang->setEnabled(true);
    ui->pushButton_huabi->setEnabled(true);
    ui->pushButton_huaban->setEnabled(true);
    ui->pushButton_upan->setEnabled(true);
}

void Tbkt_Widget::btn_false()
{

    ui->pushButton_setting->setEnabled(false);
    ui->pushButton_dianming->setEnabled(false);
    ui->pushButton_qiangda->setEnabled(false);
    ui->pushButton_hudong->setEnabled(false);
    ui->pushButton_beike->setEnabled(false);
    ui->pushButton_keben->setEnabled(false);
    ui->pushButton_dianping->setEnabled(false);
    ui->pushButton_weike->setEnabled(false);
    ui->pushButton_tiwen->setEnabled(false);
    ui->pushButton_jishi->setEnabled(false);
    ui->pushButton_dianping->setEnabled(false);
    ui->pushButton_paihang->setEnabled(false);
    ui->pushButton_huabi->setEnabled(false);
    ui->pushButton_huaban->setEnabled(false);
    ui->pushButton_upan->setEnabled(false);
}

void Tbkt_Widget::tips_show(QString form_name)
{
//    ui->widget_tips->setText(form_name);
}

void Tbkt_Widget::biaoyang_show()
{
//    ui->widget_biaoyang->raise();
//    ui->widget_biaoyang->se();

}

void Tbkt_Widget::denglu()
{
    QString dengluUrl = getusertoken->GetUserClassInfo();
    tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(dengluUrl));
//    Tbkt_view->load(QUrl(dengluUrl));

}

void Tbkt_Widget::open(QString str)
{
    this->CloseOffice();
    QDir temDir(str);
    QString absDir = temDir.absolutePath();
    qDebug()<<"absDir"<<absDir;
    _excelview = new QAxWidget("PowerPoint.Application", ui->widget_webview);
    _excelview->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
    _excelview->setProperty("DisplayAlerts", false);
    auto rect = this->ui->widget_webview->geometry();
    _excelview-> setGeometry(rect);
    _excelview->setControl(absDir);
    _excelview->show();
    set_showAWindow_falg_true();

}

void Tbkt_Widget::set_showAWindow_falg_true()
{
    showAWindow_falg = true;
}

void Tbkt_Widget::set_showAWindow_falg_false()
{
    showAWindow_falg = false;
}

void Tbkt_Widget::tipstimer_out()
{
    tips_label_text("");
    tips_label->hide();
//    tips_label->deleteLater();
    tipstimer->stop();
}

void Tbkt_Widget::label_biaoyang_timer_out()
{
    label_biaoyang->hide();
    label_biaoyang_timer->stop();
}

void Tbkt_Widget::ziyuan_close()
{
    ziyuan->close();
    ziyuan_timer->stop();
}

void Tbkt_Widget::openSettingWindow()
{
    pwd_position = ui->pushButton_setting->mapToGlobal(ui->pushButton_setting->pos());
    setting->move(pwd_position.x(), pwd_position.y()-580);
    setting->show();
    //qDebug()<<"nUrl:"<<nUrl;
}
void Tbkt_Widget::set_Url_change()
{
              tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(login->Get_UserUrl()));
//    Tbkt_view->load(QUrl(login->Get_UserUrl()));
    Tbkt_view->show();
}
void Tbkt_Widget::on_pushButton_upan_clicked()
{
    openOffice();
}

void Tbkt_Widget::on_pushButton_tiwen_clicked()
{
    pwd_position = ui->widget_tbkt_tool->mapToGlobal(ui->pushButton_tiwen->pos());
    tiwen->move(pwd_position.x()-100,pwd_position.y()-300);
    tiwen->show();
    emit sendTiwenShow();
    tiwen->init();
    if(!showAWindow_falg)
    {
    showAWindow();}
}
//计时按钮槽函数
void Tbkt_Widget::on_pushButton_jishi_clicked()
{
    //    ui->widget->show();
    pwd_position = ui->widget_tbkt_tool->mapToGlobal(ui->pushButton_jishi->pos());
    jishi->move(pwd_position.x()-30,pwd_position.y()-220);
    jishi->show();
    emit sendJishiShow();
}
//备课按钮槽函数
void Tbkt_Widget::on_pushButton_beike_clicked()
{
    CloseOffice();
    qDebug()<<"**********"<<showAWindow_falg;
              tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(pre.get_prepare_url("prepare_lessons_page")));
 //   Tbkt_view->load(QUrl(pre.get_prepare_url("prepare_lessons_page"))); //    QString prepare_lessons_page; //备课页面url，带token




    Tbkt_view->show();
}
//点名按钮槽函数
void Tbkt_Widget::on_pushButton_dianming_clicked()
{
    tips_label->show();
    pwd_position = ui->pushButton_dianming->mapToGlobal(ui->pushButton_dianming->pos());
    jushou->move(pwd_position.x()-30,pwd_position.y()-400);
    if(!showAWindow_falg)
    {
        qDebug()<<"showAWindow_falg"<<showAWindow_falg;
    showAWindow();}
    jushou->show();
    emit sendJushouShow();
    //   QString geturl = getusertoken->GetUserClassInfo();
    //    getusertoken->GetUserClassInfo();
    //    login.te();
    //qDebug()<<login.te();
    //    QString geturl = login->newUrl;
    //    QString token = login->newtbkt_token;
    //qDebug()<<"点击点名按键打印geturl：   "<<geturl;
    //qDebug()<<"点击点名按键打印token：   "<<token;

    jushou->initDev(0);
}
//抢答按钮槽函数
void Tbkt_Widget::on_pushButton_qiangda_clicked()
{
    pwd_position = ui->widget_tbkt_tool->mapToGlobal(ui->pushButton_qiangda->pos());
    qiangda->move(pwd_position.x()-100,pwd_position.y()-350);
    qiangda->show();
    emit sendQiangdaShow();
    qiangda->init();
    if(!showAWindow_falg)
    {
    showAWindow();}
}
//互动按钮槽函数
void Tbkt_Widget::on_pushButton_hudong_clicked()
{
   // delete hudong;
   // hudong = new hudong_Dialog;
    pwd_position = ui->widget_webview->mapToGlobal(ui->pushButton_hudong->pos());
    hudong->move(pwd_position.x()+1080,pwd_position.y()+150);
    hudong->show();
    emit sendHudongShow();
    hudong->StartStopwatch();
    hudong->initDev();
    if(!showAWindow_falg)
    {
    showAWindow();}
}
//排行按钮槽函数
void Tbkt_Widget::on_pushButton_paihang_clicked()
{
    pwd_position = ui->widget_tbkt_tool->mapToGlobal(ui->pushButton_paihang->pos());
    paihang->move(pwd_position.x()-200,pwd_position.y()-930);
    paihang->stuOrder();

    //   paihang->setWindowFlags(Qt::WindowStaysOnTopHint |Qt::FramelessWindowHint);
    if(paihang_change)
    {
    paihang->show();
    emit sendPaihangShow();
    paihang_change = false;
    }
    else {
        paihang->close();
        paihang_change = true;
    }
//    if(!showAWindow_falg)
//    {
//    showAWindow();}

}
//课本按钮槽函数
void Tbkt_Widget::on_pushButton_keben_clicked()
{
    CloseOffice();
              tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(pre.get_prepare_url("textbook_page")));
  //  Tbkt_view->load(QUrl(pre.get_prepare_url("textbook_page")));    //    QString textbook_page;  //课本页面url，带token
    Tbkt_view->show();
}
//点评按钮槽函数
void Tbkt_Widget::on_pushButton_dianping_clicked()
{
    CloseOffice();
              tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(pre.get_prepare_url("task_comment_page")));
  //  Tbkt_view->load(QUrl(pre.get_prepare_url("task_comment_page")));    //    QString task_comment_page;  //作业点评页面url，带token
    Tbkt_view->show();
}
//微课按钮槽函数
void Tbkt_Widget::on_pushButton_weike_clicked()
{
    CloseOffice();
    tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(pre.get_prepare_url("micro_lesson_page")));
//    Tbkt_view->load(QUrl(pre.get_prepare_url("micro_lesson_page")));    //    QString micro_lesson_page; //微课页面url，带token
    Tbkt_view->show();
}
//画板按钮槽函数
void Tbkt_Widget::on_pushButton_huaban_clicked()
{
    pwd_position = ui->widget_webview->mapToGlobal(ui->pushButton_huaban->pos());
    //huaban->move(pwd_position.x()-230,pwd_position.y()+50);
    huaban->move(tbkt->size().width() / 2 - huaban->size().width() / 2, tbkt->size().height() / 2 - huaban->size().height() / 2);
    huaban->show();
    emit sendHuabanShow();
}

void Tbkt_Widget::on_pushButton_huabi_clicked()
{
    //    ui->frame_huabu->showMaximized();
    huabi->setAttribute(Qt::WA_ShowModal, true);
    emit sendHuabiOpen();
    huabi->move(0,0);
    huabi->showFullScreen();
    //    ui->widget_huabu->showFullScreen();
}
void Tbkt_Widget::on_pushButton_huabihide_clicked()
{
    //   ui->widget_huabu->close();
}
void Tbkt_Widget::OpenExcel(QString& fileName)

{

    //    _excelview = new QAxWidget("Excel.Application", 0);
    //    _excelview->dynamicCall("SetVisible (bool Visible)", "false");
    //    _excelview->setProperty("DisplayAlerts", false);
    //    auto rect = ui->frame->geometry();
    //    _excelview->setGeometry(rect);
    //    _excelview->setControl(fileName);
    //    _excelview->show();
}
void Tbkt_Widget::OpenWord(QString &str)
{

}
void Tbkt_Widget::openPpt(QString &str)
{
    this->CloseOffice();
    _excelview = new QAxWidget("PowerPoint.Application", ui->widget_webview);
    _excelview->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
    _excelview->setProperty("DisplayAlerts", false);
    auto rect = this->ui->widget_webview->geometry();
    _excelview-> setGeometry(rect);
    _excelview->setControl(str);
    _excelview->show();

}

void Tbkt_Widget::openOffice()

{
    set_showAWindow_falg_true();
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setViewMode(QFileDialog::Detail);
    dialog.setOption(QFileDialog::ReadOnly, true);
    dialog.setWindowTitle(QString("QAXwidget操作文件"));
    dialog.setDirectory(QString("./"));
    dialog.setNameFilter(QString("演示文档(*.pptx *.ppt)"));
    if (dialog.exec())
    {
        //根据文件后缀打开
        QStringList files = dialog.selectedFiles();
        for(auto filename : files)
        {
            if(filename.endsWith(".pptx")|| filename.endsWith(".ppt"))
            {
//                qDebug()<<"if(filename.endsWith)"<<filename;
                this->openPpt(filename);
                return;
            }
            else if(filename.endsWith(".docx") || filename.endsWith(".doc"))
            {
                this->OpenWord(filename);
            }
            else if(filename.endsWith(".xlsx"))
            {
                this->openPpt(filename);
            }
        }
    }
}
void Tbkt_Widget::CloseOffice()
{
    set_showAWindow_falg_false();
    if(this->_excelview)
    {
        _excelview->close();
        _excelview->clear();
        delete _excelview;
        _excelview = nullptr;
 //       this->Tbkt_view;

    }

}
void Tbkt_Widget::weikes()
{
    qDebug()<<"1111111111111111111111111111111111111111111111111111";
    QJsonArray jsonArray;
    QJsonObject jsonObject;
    jsonObject["tbkt_token"] = login->Get_Token();
    QNetworkAccessManager manager;
    QNetworkRequest request(QUrl("https://sapikz-rc.m.tbkt.cn/account/profile_kz"));
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
        ui->pushButton_weike->setVisible(subObj.value("is_display_micro_lesson").toBool());

        qDebug()<<"w我是pctimer";
        qDebug()<<"1111111111111111111111111111111111111111111111111111";
    }
}

void Tbkt_Widget::on_pushButton_clicked()
{
    label_biaoyang_show();
}

void Tbkt_Widget::on_pushButton_2_clicked()
{
    tips_label_text("我是提示窗");
}

//zhangxj
void Tbkt_Widget::showAWindow()
{
    mpShadeWindow->setGeometry(0, 0, this->width(), this->height());
    mpShadeWindow->show();
}

void Tbkt_Widget::resetUI()
{
    mpShadeWindow->hide();
    mpShadeWindow->setGeometry(0,0,1,1);
}

void Tbkt_Widget::closeEvent(QCloseEvent *)
{
    CloseOffice();
}

void Tbkt_Widget::init_tbkt_widget()
{

}
