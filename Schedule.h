#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Date.h"

#include <QString>

#include <QMetaType>

class Schedule
{
public:
    Schedule();
    bool setData(Date startTime,Date endTime,QString item,QString important,QString category);


    Date getStartTime() const;
    void setStartTime(const Date &newStartTime);

    Date getEndTime() const;
    void setEndTime(const Date &newEndTime);

    QString getItem() const;
    void setItem(const QString &newItem);

    QString getImportant() const;
    void setImportant(const QString &newImportant);

    QString getCategory() const;
    void setCategory(const QString &newCategory);



private:
    Date startTime;
    Date endTime;
    QString item;
    QString important;
    QString category;
};
Q_DECLARE_METATYPE(Schedule)
#endif // SCHEDULE_H
