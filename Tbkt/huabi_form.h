//*****画笔窗口的头文件*****//
#ifndef HUABI_FORM_H
#define HUABI_FORM_H

#include <QWidget>
#include <QCursor>
namespace Ui {
class huabi_Form;
}

class huabi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit huabi_Form(QWidget *parent = nullptr);
    ~huabi_Form();

public slots:
    void SetEraser();
    void SetPen();
    void SetColor();
//    void Save();
private slots:
    void open_huabu(); //打开画布
    void on_pushButton_huabiclose_clicked();

    void on_huabi_huabi_clicked();

    void on_huabi_close_clicked();

    void on_huabi_era_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_heise_clicked();

    void on_pushButton_chengse_clicked();

    void on_pushButton_huangse_clicked();

    void on_pushButton_huise_clicked();

    void on_pushButton_hongse_clicked();

    void on_pushButton_baise_clicked();

    void on_pushButton_lvse_clicked();

    void on_pushButton_lanse_clicked();

    void on_pushButton_qingse_clicked();

    void on_pushButton_fense_clicked();

    void on_buabi_unm_clicked();

    void on_huabi_del_clicked();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

protected:
    void closeEvent(QCloseEvent *);

private:
    int pen_size = 1;
    bool pen;
    QCursor *myCursor;
        QColor col;
    Ui::huabi_Form *ui;
    void paintEvent(QPaintEvent *e);
};

#endif // HUABI_FORM_H
