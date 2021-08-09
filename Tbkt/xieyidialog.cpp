#include "xieyidialog.h"
#include "ui_xieyidialog.h"
#include <QBitmap>
#include <QPainter>

xieyiDialog::xieyiDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xieyiDialog)
{
    ui->setupUi(this);
    //设置关于窗体为圆角
    QBitmap bmp(this->size());
    bmp.fill();
    QPainter p(&bmp);
    p.setPen(Qt::NoPen);
    p.setBrush(Qt::black);
    p.drawRoundedRect(bmp.rect(),20,20);
    setMask(bmp);

    this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

xieyiDialog::~xieyiDialog()
{
    delete ui;
}

void xieyiDialog::on_pushButton_guanbi_clicked()
{
    this->close();
}

void xieyiDialog::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://wap-beta.m.xueceping.cn/security_info/user_agreement/")));
}

void xieyiDialog::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://wap-beta.m.xueceping.cn/security_info/privacy/")));
}

void xieyiDialog::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://wap-beta.m.xueceping.cn/security_info/children_privacy/")));
}

void xieyiDialog::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://wap-beta.m.xueceping.cn/security_info/complaint/")));
}

void xieyiDialog::on_pushButton_5_clicked()
{
    this->hide();
    zhuxiao.add_tell();
    zhuxiao.show();
}
