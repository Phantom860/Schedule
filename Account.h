#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Base.h"
#include "Mydatabase.h"
#include "Date.h"
#include "Schedule.h"

#include <vector>
using namespace std;

class Account : public Base
{
public:
    Account();
    ~Account();

    virtual void selectSchedule(QList<Schedule> &ToDo) override;
    virtual void addSchedule(Schedule &ToDo) override;
    virtual void deleteSchedule(int id) override;
    virtual void updateSchedule(Schedule &ToDo) override;

private:



};

#endif // ACCOUNT_H
