#ifndef THIRDTEST_H
#define THIRDTEST_H

#include <QWidget>
#include "mythird.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ThirdTest; }
QT_END_NAMESPACE

class ThirdTest : public QWidget
{
    Q_OBJECT
private:
    MyThird mythird;
protected:
    void closeEvent(QCloseEvent *) override;
private slots:
    //骰子点数和次数的槽函数
    void pointnoValuesChange(int cishi,int pointno);
    //线程的槽函数
    void thirdStar();
    void thirdFinished();

    void on_pbnThirdstar_clicked();

    void on_pbnstar_clicked();

    void on_pbnStop_clicked();

    void on_pbnThirdstop_clicked();

    void on_pbnClear_clicked();

public:
    ThirdTest(QWidget *parent = nullptr);
    ~ThirdTest();

private:
    Ui::ThirdTest *ui;
};
#endif // THIRDTEST_H
