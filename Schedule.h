#ifndef SCHEDULE_H
#define SCHEDULE_H



#include <QString>

#include <QMetaType>

class Schedule
{
public:
    Schedule();
    void setData(int id,int start_year,int start_month,int start_day,int start_hour,int start_minute,
                 int end_year,int end_month,int end_day,int end_hour,int end_minute,
                 QString item,QString important,QString category);

    QString getItem() const;
    void setItem(const QString &newItem);

    QString getImportant() const;
    void setImportant(const QString &newImportant);

    QString getCategory() const;
    void setCategory(const QString &newCategory);

    int getId() const;
    void setId(int newId);

    int getStart_year() const;
    void setStart_year(int newStart_year);

    int getStart_month() const;
    void setStart_month(int newStart_month);

    int getStart_hour() const;
    void setStart_hour(int newStart_hour);

    int getStart_day() const;
    void setStart_day(int newStart_day);

    int getStart_minute() const;
    void setStart_minute(int newStart_minute);

    int getEnd_year() const;
    void setEnd_year(int newEnd_year);

    int getEnd_month() const;
    void setEnd_month(int newEnd_month);

    int getEnd_day() const;
    void setEnd_day(int newEnd_day);

    int getEnd_hour() const;
    void setEnd_hour(int newEnd_hour);

    int getEnd_minute() const;
    void setEnd_minute(int newEnd_minute);

private:
    int id;
    int start_year;
    int start_month;
    int start_hour;
    int start_day;
    int start_minute;
    int end_year;
    int end_month;
    int end_day;
    int end_hour;
    int end_minute;
    QString item;
    QString important;
    QString category;
};
Q_DECLARE_METATYPE(Schedule)
#endif // SCHEDULE_H
