#include "settingdialog.h"
#include "ui_settingdialog.h"
#include "irsim.h"
#include <QMessageBox>
SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    initDialog();
}

SettingDialog::~SettingDialog()
{
    delete ui;
}

void SettingDialog::on_pbnClose_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Are you sure to quit?");
    msgBox.setInformativeText("确定要退出吗?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Yes:
        // Save was clicked
        irsim->close();
        break;
    case QMessageBox::Cancel:
        // Cancel was clicked
        break;
    default:
        // should never be reached
        break;
    }

}

void SettingDialog::initDialog()
{
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}

void SettingDialog::on_pbnMin_clicked()
{
    irsim->showMinimized();
}

void SettingDialog::on_pbnMax_clicked()
{
    irsim->showMaximized();
}

void SettingDialog::on_pbnFull_clicked()
{
    irsim->showFullScreen();
}

void SettingDialog::on_pbnReset_clicked()
{
    //执行irsim 定义的初始化函数

}
