#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QPainter>
//#pragma execution_character_set("utf-8")
Widget::Widget(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::Widget)

{
    ui->setupUi(this);
    connect(&m_thread, SIGNAL(stateChange()), this, SLOT(onStateChange()));
    m_thread.start();

    connect(&m_updateShow, SIGNAL(timeout()), this, SLOT(onUpdateShow()));

    setWindowTitle("UDP共享屏幕");
}

Widget::~Widget()
{
    m_thread.terminate();
    delete ui;
}

void Widget::onStateChange()
{
    qDebug()<<"onStateChange"<<m_thread.state();
    switch (m_thread.state()) {
        case ShareScreenThread::ShareScreen_None:  break;
        case ShareScreenThread::ShareScreen_Stop: ui->labelHint->setText("等待共享..."); cleanShow(); ui->comboQuality->setEnabled(true); break;
        case ShareScreenThread::ShareScreen_RecvRunning: ui->labelHint->setText("有人正在共享中☺");

            m_pressMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录的时间
            m_updateShowCnt = 0;
            m_updateShow.start(25);
            ui->comboQuality->setEnabled(false);
            break;
        case ShareScreenThread::ShareScreen_SendRunning: ui->labelHint->setText("您正在共享中☺ "); ui->comboQuality->setEnabled(true); break;
        default: break;
    }
}

void Widget::cleanShow()
{
    ui->labelShow->clear();
    ui->labelByte->setText(QString("每帧: %1KB").arg(0));
    ui->labelFPS->setText("当前FPS: "+ QString("%1").arg(0));

}


void Widget::onUpdateShow()
{
    bool getOk = false;
    int size = 0;
    QPixmap pix(m_thread.getPixmap(getOk, size));
    QSize imageSize =pix.size();
    if (size!=0)
        ui->labelByte->setText(QString("每帧: %1KB").arg(size/1024));

    if (getOk == false)
        return;

    pix = pix.scaled(ui->labelShow->size(), Qt::KeepAspectRatio);

    if (m_thread.state() == ShareScreenThread::ShareScreen_RecvRunning) {
        QPainter painter(&pix);
        painter.setRenderHints(QPainter::Antialiasing);
        QPixmap mouse(":/mouse");
        double xratio = pix.width() / (double)imageSize.width();
        double yratio = pix.height() / (double)imageSize.height();
        painter.drawPixmap(m_thread.getMousePos().x()*xratio, m_thread.getMousePos().y()*yratio , 25*xratio, 25*yratio, mouse);

    }

    ui->labelShow->setPixmap(pix);

    if (m_updateShowCnt++ >= 10) {
        qint64 tmp = QDateTime::currentDateTime().toMSecsSinceEpoch();
        qint64 durationMs = tmp - m_pressMSec;

        int fps = m_updateShowCnt * 1000/durationMs;
        ui->labelFPS->setText("当前FPS: "+ QString("%1").arg(fps));

        m_updateShowCnt = 0;
        m_pressMSec = tmp;
    }

}

void Widget::on_btnStartShare_clicked()
{
    bool question;
    switch (m_thread.state()) {
        case ShareScreenThread::ShareScreen_None: QMessageBox::information(this,"提示", "正在初始化中!"); return;
        case ShareScreenThread::ShareScreen_Stop: cleanShow(); break;
        case ShareScreenThread::ShareScreen_RecvRunning: QMessageBox::information(this,"提示", "有人正在共享中!"); return;
        case ShareScreenThread::ShareScreen_SendRunning:  question = QMessageBox::information(this,"询问", "是否取消共享?");
            if (!question)
                return;
    }



    bool myStartd = ui->btnStartShare->text().contains("停止");

    if (myStartd) {
        m_thread.stopGrabWindow();
        ui->btnStartShare->setText("StartShare");
        ui->labelFPS->setText("当前FPS:0");
        m_updateShow.stop();

        ui->labelShow->setPixmap(QPixmap());
    } else {
        m_thread.startGrabWindow();
        ui->btnStartShare->setText("停止共享");
        m_pressMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录的时间
        m_updateShowCnt = 0;
        m_updateShow.start(12);
    }

}

void Widget::keyPressEvent(QKeyEvent *event)
{


   if (ui->control->isHidden() && event->key() == Qt::Key_Escape) {
        ui->control->show();
        showMaximized();

   }

}


void Widget::on_btnFull_clicked()
{
    ui->control->hide();
    showFullScreen();

}

void Widget::on_comboQuality_currentIndexChanged(int index)
{

    switch (index) {
        case 0 : m_thread.setQuality(20); break;
        case 1 : m_thread.setQuality(38); break;
        case 2 : m_thread.setQuality(50); break;
    }
}
