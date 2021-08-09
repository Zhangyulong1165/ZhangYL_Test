#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QTabWidget>
#include <QPainter>
#include <QMouseEvent>
class drawwidget : public QWidget
{
    Q_OBJECT
signals:
    void setEraShow();
    void setPanShow();
public:
    void set_era_true();
    void set_era_false();
    explicit drawwidget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    QPen lastpen;
    QVector<QPen> pens;
    QVector<QVector<QPoint> > _lines;
public slots:

//    void set_pen_true();
//    void set_pen_true();
    void SetPen();
    void biancu();
    void chexiao();
    void bianse();
    void bianxi();
private:
    QPainter *painter;
    bool m_isdraw;
//    QVector<QColor> colors;
//    QColor lastcolor = Qt::black;



};
#endif // DRAWWIDGET_H
