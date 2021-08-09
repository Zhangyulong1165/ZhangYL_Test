#include "settingdialog.h"
#include "ui_settingdialog.h"
#include "tbkt_widget.h"
#include <QMessageBox>
#pragma execution_character_set("utf-8")

SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
//    setting = new SettingDialog(this);
    Qt::WindowFlags m_flags = windowFlags();
    setWindowFlags(m_flags | Qt::WindowStaysOnTopHint);
setWindowFlags(Qt::FramelessWindowHint);
//    Tbkt_Widget tbkt;
   // this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

}

SettingDialog::~SettingDialog()
{
    delete ui;
}
void SettingDialog::init()
{
    this->show();
}
void SettingDialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}
//void SettingDialog::mousePressEvent(QMouseEvent *event)
//{

//}
void SettingDialog::on_pushButton_tuichu_clicked()
{
    this->hide();
//    tbktclose.show();
}

void SettingDialog::on_pushButton_zuixiaohua_clicked()
{
//    this->hide();
   //Tbkt_Widget::showMinimized();
}

void SettingDialog::on_pushButton_shengji_clicked()
{
    QMessageBox::information(this, "提示!", "未找到升级文件!");
}

void SettingDialog::on_pushButton_xieyi_clicked()
{
    this->hide();
    xieyi.exec();
}
