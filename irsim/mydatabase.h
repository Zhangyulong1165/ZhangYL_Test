#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
class MyDataBase : public QObject
{
    Q_OBJECT
public:
    explicit MyDataBase(QObject *parent = nullptr);
        ~MyDataBase();

public:
    QSqlDatabase    dbconn;
    QSqlQuery       query;
protected:
private:

signals:

};
extern MyDataBase *mydatabase;
#endif // MYDATABASE_H
