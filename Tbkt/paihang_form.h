//*****排行窗口的头文件*****//
#ifndef PAIHANG_FORM_H
#define PAIHANG_FORM_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "getusertoken.h"
#include "fankui_form.h"
#include "chazhao_dialog.h"
namespace Ui {
class paihang_Form;
}

struct searchMsg
{
    int index;
    QString stu_name;
    int today_num;
    int week_num;
};


class paihang_Form : public QWidget
{
    Q_OBJECT

public:
    explicit paihang_Form(QWidget *parent = nullptr);
    ~paihang_Form();
    void init();
signals:
    void sendFankuiPaihangShow(); //反馈排行显示
    void sendChazhaoShow();   //使查找弹窗位于最前
    void sendFankuiShow();// 排行告诉反馈，你要到前面
    void sendChazhaoAndMeShow();
private slots:
    void check_my_state(); //通过前三名，来检查排行的状态
    void set_my_state_true(); //反馈出来，我的状态
    void set_my_state_false();//
//*************
    void set_chazhaoshowflag_true();   //设置查找窗口状态
    void set_chazhaoshowflag_false();
//*************


    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_jinri_clicked();

    void on_pushButton_jinri_duoxuan_clicked();

    void on_pushButton_dxqx_clicked();

    void on_pushButton_chazhao_clicked();

    void on_pushButton_czqx_clicked();

    void on_pushButton_jrph_clicked();

    void on_pushButton_bzph_clicked();      //本周排序

    void on_pushButton_dxqd_clicked();

    void on_moreCheckBox_stateChanged(int state);
    void fanKuiSlot(int row, int column);
    void fanKuiSearch(int row, int column);
    void on_pushButton_clicked();

    void on_label_no1_clicked();

    void on_label_no2_clicked();

    void on_label_no3_clicked();

public slots:
    void lookup(QString firstName);
    void today();
    void todayPx();

    void updateUi();

private:
    QVector<studentMsg> stuMsg;//本日排行
    QVector<studentMsg> stuInfo;//本周排行
    QVector<QTableWidgetItem*> ItemList;
    QString sendName;
    int sendIndex; //0 本日排行按键按下 1:本周
    QVector<searchMsg> stuSearchMsg;



private:
      void setItemData(QTableWidget *tableWidget, int x, int y, QString str);
      void setFlower(QTableWidget *tableWidget, int x, int flowerNum);
      void setCheckQTableWidge(QTableWidget *tableWidget, int x);

      void todaySearch();
      void weekSearch();

public:
    void stuOrder();
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    QWidget *zhezhaowidget;
    bool chazhao_show;
    bool my_state; //窗口的状态，反馈窗口出来，我是否要显示
    //bool eventFilter(QObject *o, QEvent *e);//事件过滤器
    bool m_showflag;   //用作确认自己是否可以位于最前
    Ui::paihang_Form *ui;
    chazhao_Dialog *chazhao;
    fankui_Form *fankui;
};

#endif // PAIHANG_FORM_H
