//*****设置窗口的头文件*****//
#ifndef SETTINGFORM_H
#define SETTINGFORM_H

#include <QWidget>
#include "xieyidialog.h"
#include "shengji_form.h"
#include "weikeshow.h"
namespace Ui {
class settingForm;
}
class settingForm : public QWidget
{
    Q_OBJECT

public:
    explicit settingForm(QWidget *parent = nullptr);
    ~settingForm();

private slots:
    void on_pushButton_xieyi_clicked();

    void on_pushButton_huanzhangjie_clicked();

    void on_pushButton_tuichu_clicked();

    void on_pushButton_huanban_clicked();

    void on_pushButton_zuixiaohua_clicked();

    void on_pushButton_shengji_clicked();

private:
    Ui::settingForm *ui;
    shengji_Form shengji;
    xieyiDialog xieyi;
    weikeshow weike;
};
extern settingForm *setting;
#endif // SETTINGFORM_H
