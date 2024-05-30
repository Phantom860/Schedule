#include "Account.h"
#include "schedule.h"
#include "Mydatabase.h"

#include <QSqlDatabase>

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
        sch.setData(id,start_year,start_month,start_day,start_hour,start_minute,end_year,end_month,end_day,end_hour,end_minute,item,important,category);
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
    query.bindValue(":id",ToDo.getId());
    query.bindValue(":start_year",ToDo.getStart_year());
    query.bindValue(":start_month",ToDo.getStart_month());
    query.bindValue(":start_day",ToDo.getStart_day());
    query.bindValue(":start_hour",ToDo.getStart_hour());
    query.bindValue(":start_minute",ToDo.getStart_minute());
    query.bindValue(":end_year",ToDo.getEnd_year());
    query.bindValue(":end_month",ToDo.getEnd_month());
    query.bindValue(":end_day",ToDo.getEnd_day());
    query.bindValue(":end_hour",ToDo.getEnd_hour());
    query.bindValue(":end_minute",ToDo.getEnd_minute());
    query.bindValue(":item",ToDo.getItem());
    query.bindValue(":category",ToDo.getCategory());
    query.bindValue(":important",ToDo.getImportant());
    query.exec();
    db->destroyConn();
}

void Account::deleteSchedule(int id)
{
    MyDatabase *db = MyDatabase::getInstance();
    db->createConn();
    QSqlQuery query;
    QString sql = QString("delete from tb_ToDo where id = %1").arg(id);
    if(!query.exec(sql))
    {
        qDebug() << "Failed to delete id!!!";
        db->destroyConn();

    }

    db->destroyConn();
}

void Account::updateSchedule(Schedule &ToDo)
{
    MyDatabase *db = MyDatabase::getInstance();
    db->createConn();
    QSqlQuery query;
    query.prepare("update tb_ToDo set start_year=:start_year,start_month=:start_month,start_day=:start_day,start_hour=:start_hour,start_minute=:start_minute,"
                  "end_year=:end_year,end_month=:end_month,end_day=:end_day,end_hour=:end_hour,end_minute=:end_minute,"
                  "item=:item,important=:important,category=:category where id=:id");
    query.bindValue(":id",ToDo.getId());
    query.bindValue(":start_year",ToDo.getStart_year());
    query.bindValue(":start_month",ToDo.getStart_month());
    query.bindValue(":start_day",ToDo.getStart_day());
    query.bindValue(":start_hour",ToDo.getStart_hour());
    query.bindValue(":start_minute",ToDo.getStart_minute());
    query.bindValue(":end_year",ToDo.getEnd_year());
    query.bindValue(":end_month",ToDo.getEnd_month());
    query.bindValue(":end_day",ToDo.getEnd_day());
    query.bindValue(":end_hour",ToDo.getEnd_hour());
    query.bindValue(":end_minute",ToDo.getEnd_minute());
    query.bindValue(":item",ToDo.getItem());
    query.bindValue(":important",ToDo.getImportant());
    query.bindValue(":category",ToDo.getCategory());
    if(!query.exec())
    {
        qDebug() << query.lastQuery();
        db->destroyConn();
    }
    db->destroyConn();
}




