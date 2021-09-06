#ifndef MYTHIRD_H
#define MYTHIRD_H

#include <QObject>
#include <QThread>
class MyThird : public QThread
{
    Q_OBJECT
protected:
    void run() override;
private:
    int m_pointno;
    int m_cishu;

    bool m_stop;
    bool m_star = true;

signals:
    void send_values(int cichu,int pointno);

public:
    MyThird();
    void mystar();
    void mystop();
    void stopThread();

};

#endif // MYTHIRD_H
