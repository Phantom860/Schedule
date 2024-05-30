#include "Account.h"
#include "schedule.h"
#include "Mydatabase.h"

#include <QSqlDatabase>
#include <QVariant>
#include <QDebug>
#include <QSqlQuery>

Account::Account()
{

}

Account::~Account()
{

}

void Account::selectSchedule(QList<Schedule> &ToDo)
{
    MyDatabase *db = MyDatabase::getInstance();
    db->createConn();
    QSqlQuery query;
    QString sql = "select * from tb_ToDo;";
    if(!query.exec(sql))
    {
        qDebug() << "Failed to select;";
    }

    while(query.next())
    {
        Schedule sch;
        int id = query.value("id").toInt();
        int start_year = query.value("start_year").toInt();
        int start_month = query.value("start_month").toInt();
        int start_day = query.value("start_day").toInt();
        int start_hour = query.value("start_hour").toInt();
        int start_minute = query.value("start_minute").toInt();
        int end_year = query.value("end_year").toInt();
        int end_month = query.value("end_month").toInt();
        int end_day = query.value("end_day").toInt();
        int end_hour = query.value("end_hour").toInt();
        int end_minute = query.value("end_minute").toInt();
        QString item = query.value("item").toString();
        QString important = query.value("important").toString();
        QString category = query.value("category").toString();
        sch.setData(id,startTime,endTime,item,important,category);
        ToDo.append(sch);
    }
    db->destroyConn();
}



void Account::addSchedule(Schedule &ToDo)
{
    MyDatabase *db = MyDatabase::getInstance();
    db->createConn();

    QSqlQuery query;
    query.prepare("insert into tb_ToDo(id,start_year, start_month, start_day, start_hour, start_minute, "
                  "end_year, end_month, end_day, end_hour, end_minute,item,important,category),"
                  "values(:startTime,:endTime,:item,:important,:category);");
    query.bindValue(":start_year",ToDo.getStartTime().getYear());
    query.bindValue(":start_month",ToDo.getStartTime().getMonth());
    query.bindValue(":start_day",ToDo.getStartTime().getDay());
    query.bindValue(":start_hour",ToDo.getStartTime().getHour());
    query.bindValue(":start_minute",ToDo.getStartTime().getMinute());
    query.bindValue(":end_year",ToDo.getEndTime().getYear());
    query.bindValue(":end_month",ToDo.getEndTime().getMonth());
    query.bindValue(":end_day",ToDo.getEndTime().getDay());
    query.bindValue(":end_hour",ToDo.getEndTime().getHour());
    query.bindValue(":end_minute",ToDo.getEndTime().getMinute());
    query.bindValue(":item",ToDo.getItem());
    query.bindValue(":category",ToDo.getCategory());
    query.bindValue(":important",ToDo.getImportant());
    query.exec();
    db->destroyConn();
}

void Account::deleteSchedule(Schedule &ToDo)
{

}

void Account::updateSchedule(Schedule &ToDo)
{

}




