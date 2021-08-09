#pragma once

#include <QWidget>
#include<QPen>
class XImage : public QWidget
{
    Q_OBJECT

public:
    XImage(QWidget *parent = 0);
    ~XImage();
    QPen lastpen;
    QVector<QPen> pens;
    QVector<QVector<QPoint> > _lines;

    void paintEvent(QPaintEvent * ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent*);
        void mouseReleaseEvent(QMouseEvent*);
public slots:
    void Open();
    void SetPen(int size, QColor col);
    void SetEraser(int size);
    void Save();
protected:
    //原图
    QImage src;
    //输出图像
    QImage out;
    //上一次的鼠标位置
    QPoint mpos;

};
