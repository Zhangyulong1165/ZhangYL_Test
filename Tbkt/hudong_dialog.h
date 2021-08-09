//*****互动窗口的头文件*****//
#ifndef HUDONG_DIALOG_H
#define HUDONG_DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QMap>
#include <QVector>
#include <QTableWidget>
#include "set_ansform.h"
#include "tbdev.h"
#include "getusertoken.h"


struct studentAnswer
{
    QString stu_name;
    QString answer;
};

namespace Ui {
class hudong_Dialog;
}

class hudong_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit hudong_Dialog(QWidget *parent = nullptr);
    ~hudong_Dialog();

    void ResetStopwatch();  //复位秒表
    void StopStopwatch();   //暂停秒表
    void set_hudongshow_true();   //使窗口显示到最前方
    void set_hudongshow_false();//不使窗口显示到最前方
signals:
    void sendAnsShow(); //告诉答案分析弹窗，你需要位于最前方
public slots:
    void StartStopwatch();  //启动秒表
    void on_pushButton_hudong_close_clicked();
    void TimeSlot();




private slots:
    void set_check_change_btn2(); //确定答案，改变按钮为答题结果
    void set_check_change_btn(); //确定答案，改变按钮为答题分析
    void set_check_flag_true();   //是否选择答案
    void set_check_flag_false();//
    //****************************************
    void set_showansflag_true();   //使窗口显示到最前方
    void set_showansflag_false();//不使窗口显示到最前方
    void set_showflag_true();   //使窗口显示到最前方
    void set_showflag_false();//不使窗口显示到最前方
    void on_pushButton_stopans_clicked();

    void on_pushButton_ans_fenxi_clicked();

    void fenxi(QString answer);
    void on_pushButton_hudong_close_2_clicked();

    void on_praiseButton_clicked();

    void on_pushButton_hudongchouti_clicked();


private:
    Ui::hudong_Dialog *ui;
    void init();
    int hourTemp;           //Hour
    int minuteTemp;         //Minute
    int secondTemp;         //Second
    int countTemp;
    QTimer *msTimer;   //定义一个定时器
    int isDisplayFx;
    //    void Display(QString,QString,QString);
    void Display(QString,QString);
    void SetStrLength(QString *str, int length);
    set_ansForm *ans;
    TbDev *tbdev;
    QMap<QString,QString> stuMap;
    QVector<studentAnswer> stuInfo;

    QVector<QString> rightStu;
    QVector<QString> errorStu;
    QVector<studentMsg> allStu;
    QVector<QString> allVec;
    QVector<QString> stuCardIds;
    int stuNum;

    QVector<studentMsg> allStuInfo;

public slots:
    void revDataMsg(QString cardID,QString answer);
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_check_flag; //是否做出正确选择
    bool m_ansshow; //设置是否显示答案的标志位
    bool m_hudongshow;
    bool m_showflag;   //用作确认自己是否可以位于最前
    void updateStuInfo();
    void setItemData(QTableWidget *tableWidget,int x,int y,QString str);
    void displayTableWidget(QTableWidget *tableWidget,QVector<QString> &vector);

public:
    void initDev();
};

#endif // HUDONG_DIALOG_H
