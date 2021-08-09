#ifndef OPEN_OFFICE_H
#define OPEN_OFFICE_H

#include <QObject>

class open_office : public QObject
{
    Q_OBJECT
public:
    explicit open_office(QObject *parent = nullptr);
void openOffice();
signals:

};

#endif // OPEN_OFFICE_H
