#include "tltipswidget.h"
#include "tltipswidget.h"
#include <QPainter>
#pragma execution_character_set("utf-8")
TLTipsWidget::TLTipsWidget(QWidget *parent) :
    QWidget(parent),
    m_pLabel(NULL),
    m_pTimer(NULL),
    m_pCloseTimer(NULL),
    m_dTransparent(1.0)
{
//    this->setFixedHeight(1920);
    m_pLabel = new QLabel(this);
//    m_pLabel->setFixedHeight(1080);
 //
//    m_pLabel->setAlignment(Qt::AlignCenter);
//    m_pLabel->setStyleSheet("QLabel{border-image: url(:/new/prefix1/Images/good.png);}");
    this->hide();
    this->setWindowFlags(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground,true);

    m_pTimer = new QTimer();
//    m_pTimer->setInterval(4000);
    m_pCloseTimer = new QTimer();
    m_pCloseTimer->setInterval(200);
    connect(m_pTimer,&QTimer::timeout,this,&TLTipsWidget::onTimerStayOut);
    connect(m_pCloseTimer,&QTimer::timeout,this,&TLTipsWidget::onTimerCloseOut);
}

TLTipsWidget::~TLTipsWidget()
{
    delete m_pTimer;
    delete m_pCloseTimer;
}

void TLTipsWidget::setText(const QString &text){
    m_pLabel->setAlignment(Qt::AlignHCenter| Qt::AlignVCenter);
    QFontMetrics fm(this->font());
    int width = fm.width(text)*2;
    int hight = width/6;
    this->setAttribute(Qt::WA_TranslucentBackground,false);
    this->setFixedWidth(width);
    this->setFixedHeight(hight);
    this->setStyleSheet("QWidget{background-color:transparent;}");
    this->m_pLabel->setStyleSheet("QLabel{background-color: rgb(0,0,0);color: rgb(255, 255,255);font-family:Microsoft YaHei;font: 500 16pt;}");
    m_pLabel->setFixedWidth(width);
    m_pLabel->setFixedHeight(hight);
    m_pLabel->move(0,0);
    this->m_pLabel->setText(text);
    this->show();
    m_pTimer->start(3000);
}
void TLTipsWidget::se()
{
    QFontMetrics fm(this->font());
 //   int width = fm.width(text) * 1.2;
    m_pLabel->setText(nullptr);
    this->setStyleSheet("QWidget{background-color:transparent;}");
    m_pLabel->setFixedWidth(1920);
    m_pLabel->setFixedHeight(1080);
    m_pLabel->move(0,0);
    this->m_pLabel->setStyleSheet("QLabel{border-image: url(:/new/prefix1/Images/good.png);}");
    this->showFullScreen();
    m_pTimer->start(3000);
}

void TLTipsWidget::open_ziyan_gif()
{
    QFontMetrics fm(this->font());
 //   int width = fm.width(text) * 1.2;
    m_pLabel->setText(nullptr);
    this->setStyleSheet("QWidget{background-color:transparent;}");
    m_pLabel->setFixedWidth(1920);
    m_pLabel->setFixedHeight(1080);
    m_pLabel->move(0,0);
    this->m_pLabel->setStyleSheet("QLabel{border-image: url(:/new/prefix1/Images/good.png);}");
    this->showMaximized();
    m_pTimer->start();
}

void TLTipsWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(252,255,255,180));
    painter.drawRoundedRect(rect(),5,5);
    QWidget::paintEvent(e);
}

void TLTipsWidget::showEvent(QShowEvent *e)
{
    QTimer::singleShot(2500,this,SLOT(hide()));
    this->move(parentWidget()->width() / 2 - this->width()/2,
               (parentWidget()->height()*(1- (172/1120))) / 2 - this->height() / 2);
    QWidget::showEvent(e);
}

void TLTipsWidget::onTimerStayOut()
{
    m_pTimer->stop();
    if(m_pCloseTimer->isActive()){
        m_pCloseTimer->stop();
    }
    m_pCloseTimer->start();
}

void TLTipsWidget::onTimerCloseOut()
{
    m_dTransparent -= 0.001;
    if(m_dTransparent <= 0.0001)
    {
        m_pCloseTimer->stop();
        this->hide();
        m_pLabel->clear();
    }
    else
    {
        setWindowOpacity(m_dTransparent);
    }
}
