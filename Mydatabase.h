#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QSqlDatabase>
class MyDatabase
{
public:
    MyDatabase();
    static MyDatabase* getInstance();
    void createConn();
    void destroyConn();

private:
    QSqlDatabase db;
    static MyDatabase* instance;
};

#endif // MYDATABASE_H
