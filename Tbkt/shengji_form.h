#ifndef SHENGJI_FORM_H
#define SHENGJI_FORM_H

#include <QWidget>
#include <QTimer>
#include <QLabel>
namespace Ui {
class shengji_Form;
}

class shengji_Form : public QWidget
{
    Q_OBJECT

public:
    explicit shengji_Form(QWidget *parent = nullptr);
    ~shengji_Form();
   void init();

private slots:
    void timer_timeout();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_sdhengjizanting_clicked();

private:
    int i;
//    QLabel *prolabel;
    QTimer *timer;
    Ui::shengji_Form *ui;
    void paintEvent(QPaintEvent *);
};

#endif // SHENGJI_FORM_H
