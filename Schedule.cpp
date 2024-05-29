#include "Schedule.h"

#include <QDebug>

#include <QString>

Schedule::Schedule()
{


}

Date Schedule::getStartTime() const
{
    return startTime;
}

void Schedule::setStartTime(const Date &newStartTime)
{
    startTime = newStartTime;
}

Date Schedule::getEndTime() const
{
    return endTime;
}

void Schedule::setEndTime(const Date &newEndTime)
{
    endTime = newEndTime;
}

QString Schedule::getItem() const
{
    return item;
}

void Schedule::setItem(const QString &newItem)
{
    item = newItem;
}

QString Schedule::getImportant() const
{
    return important;
}

void Schedule::setImportant(const QString &newImportant)
{
    important = newImportant;
}

QString Schedule::getCategory() const
{
    return category;
}

void Schedule::setCategory(const QString &newCategory)
{
    category = newCategory;
}






