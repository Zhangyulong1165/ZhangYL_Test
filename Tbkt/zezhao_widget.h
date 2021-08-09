#ifndef ZEZHAO_WIDGET_H
#define ZEZHAO_WIDGET_H

#include <QWidget>

class zezhao_widget : public QWidget
{
    Q_OBJECT
public:
    explicit zezhao_widget(QWidget *parent = nullptr);
    void zhezhao_show();
    void zhezhao_hide();
signals:
protected:

private:
    QWidget *zhezhao;

};

#endif // ZEZHAO_WIDGET_H
