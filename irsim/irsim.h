#ifndef IRSIM_H
#define IRSIM_H

#include <QMainWindow>
#include "settingdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Irsim; }
QT_END_NAMESPACE

class Irsim : public QMainWindow
{
    Q_OBJECT

public:
    Irsim(QWidget *parent = nullptr);
    ~Irsim();
private slots:
    //导航按键槽函数
    void on_tbnSeeting_clicked();
    void tbnZhuJieMSlot();
    void tbnFangAnSlot();
    void tbnFangZhenSlot();
    void tbnXiaoGuoSlot();
    //二级按键槽函数
private:
    //添加QSS文件
    void addQssFile();
    //初始化界面
    void initIrsim();
    SettingDialog *setting;
    bool settingShow = true;
    void setSettingShowStatae();
protected:
    void closeEvent(QCloseEvent *);
private:
    Ui::Irsim *ui;
};
extern Irsim *irsim;
#endif // IRSIM_H
