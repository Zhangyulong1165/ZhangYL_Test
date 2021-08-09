#include "zezhao_widget.h"

zezhao_widget::zezhao_widget(QWidget *parent) : QWidget(parent)
{
    zhezhao = new QWidget();
    QString str("QWidget{background-color:rgba(255,255,255,0.5);}");
    zhezhao->setStyleSheet(str);
    zhezhao->setGeometry(0, 0, 1, 1);
    zhezhao->hide();

}

void zezhao_widget::zhezhao_show()
{
    zhezhao->setGeometry(0, 0, this->width(), this->height());

    zhezhao->showMaximized();
}

void zezhao_widget::zhezhao_hide()
{
    zhezhao->hide();
    zhezhao->setGeometry(0,0,1,1);
}

