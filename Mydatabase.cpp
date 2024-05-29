#include "Mydatabase.h"

MyDatabase* MyDatabase::instance = 0;

MyDatabase* MyDatabase::getInstance()
{
    if(0 == instance)
        instance = new MyDatabase();
    return instance;
}


MyDatabase::MyDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
}

void MyDatabase::createConn()
{
    db.setDatabaseName("Schedule.db");
    db.open();
}

void MyDatabase::destroyConn()
{
    db.close();
    db.removeDatabase("Schedule.db");
}
