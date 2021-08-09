#ifndef DIBUFORM_H
#define DIBUFORM_H

#include <QWidget>
#include "settingdialog.h"

namespace Ui {
class dibuForm;
}

class dibuForm : public QWidget
{
    Q_OBJECT
private slots:
//    void set_showflag_true();   //设置本窗口位于最前方
    void on_pushButton_setting_clicked();

public:
    explicit dibuForm(QWidget *parent = nullptr);
    ~dibuForm();

private:
    Ui::dibuForm *ui;
    SettingDialog *settings;
protected:
//    void closeEvent(QCloseEvent *);
//    bool eventFilter(QObject *, QEvent *);   //事件过滤器
};

#endif // DIBUFORM_H
