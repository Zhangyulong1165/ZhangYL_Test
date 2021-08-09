#include "ximage.h"
#include <QPainter>
#include <QFileDialog>
#include <QMouseEvent>
#include <QPen>
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>
#include <QPixmap>
#include <QUuid>
#include <QDateTime>
#include <QtDebug>
#pragma execution_character_set("utf-8")
XImage::XImage(QWidget *parent)
    : QWidget(parent)
{
}

XImage::~XImage()
{
}
void XImage::Open()
{
//    if()
    QScreen *screen = QGuiApplication::primaryScreen();
    QPixmap pixmap = screen->grabWindow(QApplication::desktop()->winId());

    QString name = QString("%1-%2.png").
            arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).
            arg(QUuid::createUuid().toString());
    qDebug()<<name;
    pixmap.save(name);
    src = pixmap.toImage();
    resize(src.size());
//    mpos = QPoint();
    out = src.copy();
    update();
}
void XImage::paintEvent(QPaintEvent *ev)
{
    if(out.isNull())
    {
        out = QImage();
        out.fill(Qt::white);
    }
    QImage ima = out;
    QPainter p(&ima);
    for(int i = 0 ; i < _lines.size(); i++)
    {
        const QVector<QPoint> &line = _lines.at(i);
        p.setPen(pens.at(i));
        for (int j = 0 ; j < line.size()-1; j++)
        {
            p.drawLine(line.at(j),line.at(j+1));
        }
    }
    p.end();
    p.begin(this);
        p.drawImage(0, 0,ima);
}

void XImage::SetPen(int size, QColor col)
{
    lastpen.setWidth(size);
    lastpen.setBrush(col);
    lastpen.setCapStyle(Qt::RoundCap);
    lastpen.setJoinStyle(Qt::RoundJoin);
}
//橡皮擦
void XImage::SetEraser(int size)
{
    lastpen.setWidth(size);
    lastpen.setBrush(QBrush(src));
}
void XImage::Save()
{
    if (out.isNull())return;
    QString filename=QFileDialog::getSaveFileName(this, QStringLiteral("保存文件"), "", QStringLiteral("支持格式(*.png *.jpg *.bmp)"));
    if (filename.isNull())return;
    if (!out.save(filename))return;
}
void XImage::mouseMoveEvent(QMouseEvent * ev)
{
    QPainter p(this);
//qDebug() << "移动事件";
    if(_lines.size() == 0)
    {
        QVector<QPoint> line;
        _lines.append(line);
    }
    QVector<QPoint> &lastline = _lines.last();
    lastline.append(ev->pos());
//对这个类的事件进行跟新
    p.setRenderHint(QPainter::Antialiasing);
    this->update();
}

void XImage::mousePressEvent(QMouseEvent *ev)
{
    //qDebug() << "按下事件";
        QVector<QPoint> line;
        _lines.append(line);    //就是push_back()

    //设置这条线的颜色
        pens.append(lastpen);
    //取出线的引用
        QVector<QPoint> &lastLine = _lines.last();
    //调用pos事件，返回QPoint
        lastLine.append(ev->pos());
}
void XImage::mouseReleaseEvent(QMouseEvent* ev)
{
    //qDebug() << "释放事件";
        QVector<QPoint> &lastLine = _lines.last();
        lastLine.append(ev->pos());
        this->update();
}
