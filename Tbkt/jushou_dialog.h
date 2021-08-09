//*****举手窗口的头文件*****//
#ifndef JUSHOU_DIALOG_H
#define JUSHOU_DIALOG_H

#include <QDialog>
#include <QMovie>
#include "tbdev.h"
#include <QMap>
#include <QTableWidget>
#include <QVector>

namespace Ui {
class jushou_Dialog;
}

class jushou_Dialog : public QDialog
{
    Q_OBJECT


public:
    explicit jushou_Dialog(QWidget *parent = nullptr);
    ~jushou_Dialog();
signals:
    void sendJushouClose();
public slots:
private slots:
    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_3_clicked();

    void on_callAgainButton_clicked();

    void stackeChanged(int index);

    void on_praiseButton_clicked();

private:
    TbDev *tbdev;
    QMap<QString,QString> stuMap;
    QVector<QString> stuInfo;
    QVector<QString> stuCardIds;
    int isEnableButton;
    QString replys;

public slots:
    void revDataMsg(QString cardID,QString answer);

public:
    void initDev(int isEnable);

protected:

    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;   //用作确认自己是否可以位于最前

    QMovie *movie;
    void init();
    void updateStuInfo();
    void setItemData(QTableWidget *tableWidget,int x,int y,QString str);
    Ui::jushou_Dialog *ui;
};

#endif // JUSHOU_DIALOG_H
