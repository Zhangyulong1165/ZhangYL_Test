#include "settingform.h"
#include "ui_settingform.h"
#include "tbktclose_dialog.h"
#include "tbkt_widget.h"
#include "tbktclose_form.h"
#include "getusertoken.h"
#include <QBitmap>
#include <QPainter>
settingForm::settingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settingForm)
{
    ui->setupUi(this);
    //设置关于窗体为圆角
    QBitmap bmp(this->size());
    bmp.fill();
    QPainter p(&bmp);
    p.setPen(Qt::NoPen);
    p.setBrush(Qt::black);
    p.drawRoundedRect(bmp.rect(),10,10);
    setMask(bmp);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
}

settingForm::~settingForm()
{
    delete ui;
}

void settingForm::on_pushButton_xieyi_clicked()
{
    this->hide();
    qDebug() << tbkt->size().width() << "222222222222222";
    xieyi.move(tbkt->size().width() / 2 - 159, tbkt->size().height() / 2 - 194);
    xieyi.show();
}

void settingForm::on_pushButton_huanzhangjie_clicked()
{
    tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",QUrl(tbkt->urlStr));
//    tbkt->Tbkt_view->dynamicCall( QUrl(tbkt->urlStr));
        this->hide();
}

void settingForm::on_pushButton_tuichu_clicked()
{
    tbktclose->show();
        this->hide();
}

void settingForm::on_pushButton_huanban_clicked()
{
    qDebug()<<"微课状态："<<weike.is_display_micro_lesson;
    tbkt->Tbkt_view->dynamicCall("Navigate(const QString&)",getusertoken->GetUserClassInfo());
 //   tbkt->Tbkt_view->load(getusertoken->GetUserClassInfo());

        this->hide();
}

void settingForm::on_pushButton_zuixiaohua_clicked()
{
    tbkt->showMinimized();
        this->hide();
}

void settingForm::on_pushButton_shengji_clicked()
{
    this->hide();
    shengji.init();
    shengji.show();
}
