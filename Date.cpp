#include "Date.h"

Date::Date() {}

unsigned int Date::getYear() const
{
    return year;
}

void Date::setYear(unsigned int newYear)
{
    year = newYear;
}

unsigned int Date::getMonth() const
{
    return month;
}

void Date::setMonth(unsigned int newMonth)
{
    month = newMonth;
}

unsigned int Date::getDay() const
{
    return day;
}

void Date::setDay(unsigned int newDay)
{
    day = newDay;
}

unsigned int Date::getHour() const
{
    return hour;
}

void Date::setHour(unsigned int newHour)
{
    hour = newHour;
}

unsigned int Date::getMinute() const
{
    return minute;
}

void Date::setMinute(unsigned int newMinute)
{
    minute = newMinute;
}


