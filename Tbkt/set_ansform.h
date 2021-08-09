#ifndef SET_ANSFORM_H
#define SET_ANSFORM_H

#include <QWidget>

namespace Ui {
class set_ansForm;
}

class set_ansForm : public QWidget
{
    Q_OBJECT

public:
    explicit set_ansForm(QWidget *parent = nullptr);
    ~set_ansForm();
signals:
    void sendCheckAns(); //选择了正确的答案
    void sendAnsClose();  //告诉计时窗口，自己要关闭了，让它重新回到最前
    void ans(QString);
    void ansCancel();
private slots:
    void set_showflag_true();   //设置本窗口位于最前方

    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_close_clicked();


    void on_pushButton_clicked();

    void slotCheckBox(int state);

private:
    QString  checkAnswer;

public:
    void init();
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;
    Ui::set_ansForm *ui;
};

#endif // SET_ANSFORM_H
