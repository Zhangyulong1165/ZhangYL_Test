#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QDateTime>
#include <QMouseEvent>
#include <QDebug>
#include <QKeyEvent>
#include "sharescreenthread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

protected:

    void cleanShow();
    void keyPressEvent(QKeyEvent *event);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private slots:
    void onStateChange();
    void on_btnStartShare_clicked();
    void onUpdateShow();
    void on_btnFull_clicked();

    void on_comboQuality_currentIndexChanged(int index);

private:
    ShareScreenThread m_thread;
    QTimer m_updateShow;
    qint64 m_pressMSec;
    int m_updateShowCnt;

    Ui::Widget *ui;

};
#endif // WIDGET_H
