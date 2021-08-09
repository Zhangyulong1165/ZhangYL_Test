#include "drawwidget.h"
#include <QDebug>
#pragma execution_character_set("utf-8")
drawwidget::drawwidget(QWidget *parent) : QWidget(parent)
{
    lastpen.setCapStyle(Qt::RoundCap);
    lastpen.setWidth(1);
}

void drawwidget::SetPen()
{
}
void drawwidget::biancu()
{
}
void drawwidget::bianse()
{

}
void drawwidget::bianxi()
{}
void drawwidget::chexiao()
{
    while(!_lines.empty() || !pens.empty())
    {
        _lines.pop_back();
        pens.pop_back();
    }
    this->update();
}

void drawwidget::paintEvent(QPaintEvent* ev)
{
    QPainter painter(this);
//   shujujiegou  QVector<QColor> colors;

    painter.setRenderHint(QPainter::Antialiasing, true);
    for(int i = 0 ; i < _lines.size(); i++)
    {
        const QVector<QPoint> &line = _lines.at(i);
        painter.setPen(pens.at(i));
        for (int j = 0 ; j < line.size()-1; j++)
        {
            painter.drawLine(line.at(j),line.at(j+1));
        }
    }

        }

//else
//    {
//        painter.setCompositionMode(QPainter::CompositionMode_Clear);

//        for(int i = 0 ; i < _lines.size(); i++)
//        {
//            const QVector<QPoint> &line = _lines.at(i);
//            painter.setPen(pens.at(i));
//            for (int j = 0 ; j < line.size()-1; j++)
//            {
//                painter.drawLine(line.at(j),line.at(j+1));
//            }
//        }
//        qDebug()<< "绘图事件调用";
//    }
//    painter.drawPath(path);

void drawwidget::mouseMoveEvent(QMouseEvent* ev)
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

void drawwidget::mousePressEvent(QMouseEvent* ev)
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

void drawwidget::mouseReleaseEvent(QMouseEvent* ev)
{
//qDebug() << "释放事件";
    QVector<QPoint> &lastLine = _lines.last();
    lastLine.append(ev->pos());
    this->update();
}

void drawwidget::set_era_true()
{
    m_isdraw = true;
}

void drawwidget::set_era_false()
{
    m_isdraw = false;
}
