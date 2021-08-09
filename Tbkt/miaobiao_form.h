//*****秒表窗口的头文件*****//
#ifndef MIAOBIAO_FORM_H
#define MIAOBIAO_FORM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class miaobiao_Form;
}

class miaobiao_Form : public QWidget
{
    Q_OBJECT

public:
    explicit miaobiao_Form(QWidget *parent = nullptr);
    ~miaobiao_Form();
    void StartStopwatch();  //启动秒表
    void ResetStopwatch();  //复位秒表
    void StopStopwatch();   //暂停秒表
signals:
     void sendMiaobiaoClose();  //发送消息告诉计时窗口，自己要关闭了，让它回到最前方
private slots:
    void set_showflag_true();   //设置本窗口位于最前方

    void set_showflag_false();  //设置本窗口不再位于最前方
        void TimeSlot();
    void on_pushButton_kaishi_clicked();

    void on_pushButton_chongxinkaishi_clicked();

    void on_pushButton_quxiao_clicked();

    void on_pushButton_jixu_clicked();

protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;//用作确认自己是否可以位于最前
    Ui::miaobiao_Form *ui;
    void init();
    int hourTemp;           //Hour
    int minuteTemp;         //Minute
    int secondTemp;         //Second
    int countTemp;

  QTimer *msTimer;   //定义一个定时器
  void Display(QString,QString,QString);
  void SetStrLength(QString *str, int length);
};

#endif // MIAOBIAO_FORM_H
