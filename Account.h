#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Base.h"
#include "Mydatabase.h"
#include "Date.h"
#include "Schedule.h"

class Account : public Base
{
public:
    Account();
    ~Account();

    virtual vector<Schedule> selectSchedule() override;
    virtual void addSchedule(Schedule &ToDo) override;
    virtual void deleteSchedule(Schedule &ToDo) override;
    virtual void updateSchedule(Schedule &ToDo) override;

private:
    Schedule list[200];
    int numberOfSchedule = 0;


};

#endif // ACCOUNT_H
