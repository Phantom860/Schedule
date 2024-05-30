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

void MyDatabase::createScheduleTable()
{
    QSqlQuery query;
    QString createScheduleTable = QString(
        "CREATE TABLE IF NOT EXISTS ToDo ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "start_year INTEGER NOT NULL,"
        "start_month INTEGER NOT NULL,"
        "start_day INTEGER NOT NULL,"
        "start_hour INTEGER NOT NULL,"
        "start_minute INTEGER NOT NULL,"
        "end_year INTEGER NOT NULL,"
        "end_month INTEGER NOT NULL,"
        "end_day INTEGER NOT NULL,"
        "end_hour INTEGER NOT NULL,"
        "end_minute INTEGER NOT NULL,"
        "item TEXT NOT NULL,"
        "important TEXT NOT NULL,"
        "category TEXT NOT NULL)");
    if (!query.exec(createScheduleTable)) {
        qDebug() << "Failed to create schedules table";
    }
    else{
        qDebug()<<"table create success";
    }
}
