#include "Account.h"
#include "schedule.h"
#include "Mydatabase.h"

#include <QSqlDatabase>
#include <QVariant>

Account::Account()
{

}

Account::~Account()
{

}

vector<Schedule> Account::selectSchedule()
{

}

void Account::addSchedule(Schedule &ToDo)
{
    MyDatabase *database = MyDatabase::getInstance();
    database->createConn();
    QSqlQuery query;
    query.prepare("insert into tb_ToDo(startTime,endTime,item,category,important),"
                  "values(:startTime,:endTime,:item,:category,:important);");
    query.bindValue(":startTime",ToDo.getStartTime());
    query.bindValue(":endTime",ToDo.getEndTime());
    query.bindValue(":item",ToDo.getItem());
    query.bindValue(":category",ToDo.getCategory());
    query.bindValue(":important",ToDo.getImportant());
    query.exec();
    database->destroyConn();
}

