#include "dibuform.h"
#include "ui_dibuform.h"

dibuForm::dibuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dibuForm)
{
    ui->setupUi(this);
    settings = new SettingDialog(this);
        this->setWindowFlags(Qt::FramelessWindowHint);
        this->setAttribute(Qt::WA_TranslucentBackground);
}

dibuForm::~dibuForm()
{
    delete ui;
}

void dibuForm::on_pushButton_setting_clicked()
{
    settings->show();
}
