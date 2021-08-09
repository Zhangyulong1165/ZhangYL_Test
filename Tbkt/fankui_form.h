#ifndef FANKUI_FORM_H
#define FANKUI_FORM_H

#include <QWidget>
#include "fankuijieguo_form.h"

namespace Ui {
class fankui_Form;
}

class fankui_Form : public QWidget
{
    Q_OBJECT

public:
    explicit fankui_Form(QWidget *parent = nullptr);
    ~fankui_Form();
private:
    QString stuID;
    QString nameList;
    int stuNum;

signals:
    void sendFankuijieguoClose();
    void sendFankuiClose();  //告诉排行窗口，自己要关闭了，让它重新回到最前
    void updata_px();

private slots:
    void tell_paihang_fankuijieguo_close();
    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_clicked();
    void on_pushButton_f1_clicked();

    void on_pushButton_f2_clicked();

    void on_pushButton_f3_clicked();

    void on_pushButton_f4_clicked();

public slots:
    void change_title(QString name_list, QString stuId, int peopleNum);   //发送反馈给XXX
    void change_FYJJ(QString flower);   //xxx的小花花,flower是获得小红花的int值转qstring;

protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;   //用作确认自己是否可以位于最前
    FanKuiJieGuo_Form *fankuijieguo;
    Ui::fankui_Form *ui;
};

#endif // FANKUI_FORM_H
