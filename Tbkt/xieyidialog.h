#ifndef XIEYIDIALOG_H
#define XIEYIDIALOG_H

#include <QDialog>
#include <QDesktopServices>
#include <QUrl>
#include "zhuxiao_form.h"
//#include "url.h"
namespace Ui {
class xieyiDialog;
}

class xieyiDialog : public QDialog
{
    Q_OBJECT

public:
    explicit xieyiDialog(QWidget *parent = nullptr);
    ~xieyiDialog();

private slots:
    void on_pushButton_guanbi_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
//    Url myurl;
    zhuxiao_Form zhuxiao;
    Ui::xieyiDialog *ui;
};

#endif // XIEYIDIALOG_H
