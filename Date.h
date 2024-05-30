#ifndef DATE_H
#define DATE_H

#include <QStringList>

class Date
{
public:
    Date();

    unsigned int getYear() const;
    void setYear(unsigned int newYear);

    unsigned int getMonth() const;
    void setMonth(unsigned int newMonth);

    unsigned int getDay() const;
    void setDay(unsigned int newDay);

    unsigned int getHour() const;
    void setHour(unsigned int newHour);

    unsigned int getMinute() const;
    void setMinute(unsigned int newMinute);

    QString toString() const {
        return QString("%1 %2 %3 %4 %5")
            .arg(year).arg(month).arg(day).arg(hour).arg(minute);
    }

    bool fromString(const QString &str) {
        QStringList parts = str.split(" ");
        if (parts.size() != 5) return false;
        year = parts[0].toUInt();
        month = parts[1].toUInt();
        day = parts[2].toUInt();
        hour = parts[3].toUInt();
        minute = parts[4].toUInt();
        return true;
    }

    bool operator==(const Date &other) const {
            return year == other.year && month == other.month && day == other.day &&
                   hour == other.hour && minute == other.minute;
    }





private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;

};



#endif // DATE_H
