#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    huaban = new huaban_Form;
    connect(ui->pushButton,&QPushButton::clicked,huaban,&huaban_Form::show);
}

Widget::~Widget()
{
    delete ui;
}

