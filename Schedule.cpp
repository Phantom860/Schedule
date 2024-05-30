#include "Schedule.h"

#include <QDebug>

#include <QString>

Schedule::Schedule()
{

}

void Schedule::setData(int m_id,int m_start_year, int m_start_month, int m_start_day,int m_start_hour,int m_start_minute,
                       int m_end_year,int m_end_month,int m_end_day,int m_end_hour,int m_end_minute,
                       QString m_item, QString m_important, QString m_category)
{
    id = m_id;
    start_year = m_start_year;
    start_month =m_start_month;
    start_day = m_start_day;
    start_hour = m_start_hour;
    start_minute = m_start_minute;
    end_year = m_end_year;
    end_month = m_end_month;
    end_day = m_end_day;
    end_hour = m_end_hour;
    end_minute = m_end_minute;
    item = m_item;
    important = m_important;
    category = m_category;
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

int Schedule::getStart_year() const
{
    return start_year;
}

void Schedule::setStart_year(int newStart_year)
{
    start_year = newStart_year;
}

int Schedule::getStart_month() const
{
    return start_month;
}

void Schedule::setStart_month(int newStart_month)
{
    start_month = newStart_month;
}

int Schedule::getStart_hour() const
{
    return start_hour;
}

void Schedule::setStart_hour(int newStart_hour)
{
    start_hour = newStart_hour;
}

int Schedule::getStart_day() const
{
    return start_day;
}

void Schedule::setStart_day(int newStart_day)
{
    start_day = newStart_day;
}

int Schedule::getStart_minute() const
{
    return start_minute;
}

void Schedule::setStart_minute(int newStart_minute)
{
    start_minute = newStart_minute;
}

int Schedule::getEnd_year() const
{
    return end_year;
}

void Schedule::setEnd_year(int newEnd_year)
{
    end_year = newEnd_year;
}

int Schedule::getEnd_month() const
{
    return end_month;
}

void Schedule::setEnd_month(int newEnd_month)
{
    end_month = newEnd_month;
}

int Schedule::getEnd_day() const
{
    return end_day;
}

void Schedule::setEnd_day(int newEnd_day)
{
    end_day = newEnd_day;
}

int Schedule::getEnd_hour() const
{
    return end_hour;
}

void Schedule::setEnd_hour(int newEnd_hour)
{
    end_hour = newEnd_hour;
}

int Schedule::getEnd_minute() const
{
    return end_minute;
}

void Schedule::setEnd_minute(int newEnd_minute)
{
    end_minute = newEnd_minute;
}






