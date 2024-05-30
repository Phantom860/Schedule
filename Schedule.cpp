#include "Schedule.h"

#include <QDebug>

#include <QString>

Schedule::Schedule()
{

}

void Schedule::setData(int m_id,Date m_startTime, Date m_endTime, QString m_item, QString m_important, QString m_category)
{
    id = m_id;
    startTime = m_startTime;
    endTime = m_endTime;
    item = m_item;
    important = m_important;
    category = m_category;
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

int Schedule::getId() const
{
    return id;
}

void Schedule::setId(int newId)
{
    id = newId;
}






