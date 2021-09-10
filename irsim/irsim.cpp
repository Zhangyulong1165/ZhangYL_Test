#include "irsim.h"
#include "ui_irsim.h"
#include <QFile>
Irsim::Irsim(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Irsim)
{
    ui->setupUi(this);
    addQssFile();
    initIrsim();
    setting = new SettingDialog(this);
    setting->hide();
    connect(ui->tbnZhuJieM,&QToolButton::clicked,this,&Irsim::tbnZhuJieMSlot);
    connect(ui->tbnFangAn,&QToolButton::clicked,this,&Irsim::tbnFangAnSlot);
    connect(ui->tbnFangZhen,&QToolButton::clicked,this,&Irsim::tbnFangZhenSlot);
    connect(ui->tbnXiaoGuo,&QToolButton::clicked,this,&Irsim::tbnXiaoGuoSlot);

}

Irsim::~Irsim()
{
    delete ui;
}

void Irsim::addQssFile()
{
    //添加qss文件
    QFile loginqss(":/qss/irsim.qss");
    loginqss.open(QFile::ReadOnly);
    this->setStyleSheet(loginqss.readAll());
    loginqss.close();
}

void Irsim::initIrsim()
{
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    ui->labTitle->setText("高精度跟瞄评估系统");
    ui->labTitle->adjustSize();
    ui->labTitle->setGeometry(0,0,500,500);



}

void Irsim::setSettingShowStatae()
{
    settingShow = true;

}

void Irsim::closeEvent(QCloseEvent *)
{
    setting->close();
}


void Irsim::on_tbnSeeting_clicked()
{
    if(settingShow){
        setting->move(this->width() - setting->width(), this->height()/13);
        setting->setMaximumHeight(this->height()/2);
        setting->show();
        //setSettingShowStatae();
        settingShow = false;
    }
    else if (!settingShow)
    {
        setting->hide();
        setSettingShowStatae();
    }
}

void Irsim::tbnZhuJieMSlot()
{
    ui->stackedWidget->setCurrentWidget(ui->pageZhuJieM);
}

void Irsim::tbnFangAnSlot()
{
        ui->stackedWidget->setCurrentWidget(ui->pageFangAn);
}

void Irsim::tbnFangZhenSlot()
{
        ui->stackedWidget->setCurrentWidget(ui->pageFangZhen);
}

void Irsim::tbnXiaoGuoSlot()
{
        ui->stackedWidget->setCurrentWidget(ui->pageXiaoGuo);
}
