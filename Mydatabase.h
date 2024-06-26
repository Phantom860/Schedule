#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
class MyDatabase
{
public:
    MyDatabase();
    static MyDatabase* getInstance();
    void createConn();
    void destroyConn();
    void createScheduleTable();

private:
    QSqlDatabase db;
    static MyDatabase* instance;
};

#endif // MYDATABASE_H
