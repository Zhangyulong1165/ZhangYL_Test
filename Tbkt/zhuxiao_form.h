#ifndef ZHUXIAO_FORM_H
#define ZHUXIAO_FORM_H

#include <QWidget>

namespace Ui {
class zhuxiao_Form;
}

class zhuxiao_Form : public QWidget
{
    Q_OBJECT

public:
    explicit zhuxiao_Form(QWidget *parent = nullptr);
    ~zhuxiao_Form();
    //添加账号
    void add_tell();

private slots:
    void on_pbn_zhuxiao_close_clicked();

    void on_pbn_zhuxiao_clicked();

private:
    Ui::zhuxiao_Form *ui;
};

#endif // ZHUXIAO_FORM_H
