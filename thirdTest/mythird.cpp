#include "mythird.h"
#include <QTime>
void MyThird::run()
{
    m_stop = false;
    m_cishu = 0;
    qsrand(QTime::currentTime().second());
    while (!m_stop) {
        if(!m_star){
            m_pointno = qrand()%6 +1;
            m_cishu++;
            emit send_values(m_cishu,m_pointno);
        }
        msleep(500);
    }
    quit();
}

MyThird::MyThird()
{

}

void MyThird::mystar()
{
    m_star = false;
}

void MyThird::mystop()
{
    m_star = true;
}

void MyThird::stopThread()
{
    m_stop = true;
}
