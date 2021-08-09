#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include "xieyidialog.h"
//#include "tbktclose_dialog.h"
#pragma once

class Tbkt_Widget;
namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QWidget *parent = nullptr);
    ~SettingDialog();
    Tbkt_Widget *tbkt;
//    SettingDialog *setting;
    void init();
private slots:
    void set_showflag_true();   //设置本窗口位于最前方

    void on_pushButton_tuichu_clicked();

    void on_pushButton_zuixiaohua_clicked();

    void on_pushButton_shengji_clicked();

    void on_pushButton_xieyi_clicked();

private:

    Ui::SettingDialog *ui;
    bool m_showflag;   //用作确认自己是否可以位于最前
    xieyiDialog xieyi;
//    tbktclose_Dialog tbktclose;
//        void mousePressEvent(QMouseEvent *event);
};

#endif // SETTINGDIALOG_H
