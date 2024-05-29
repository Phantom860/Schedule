#ifndef BASE_H
#define BASE_H

#include <vector>

#include "Schedule.h"

using namespace std;

class Base
{
public:
    Base();
    virtual ~Base() = 0;

    virtual vector<Schedule> selectSchedule() = 0;
    virtual void addSchedule(Schedule &ToDo) = 0;
    virtual void deleteSchedule(Schedule &ToDo) = 0;
    virtual void updateSchedule(Schedule &ToDo) = 0;

private:

};

#endif // BASE_H
