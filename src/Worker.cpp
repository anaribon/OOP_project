#include "Worker.hpp"

void Worker::set_salary(int inputSalary)
{
    this->_salary = inputSalary;
}

void Worker::set_weekly_hours(int inputWeeklyHours)
{
    this->_weekly_hours = inputWeeklyHours;
}

int Worker::get_salary(void)
{
    return _salary;
}

int Worker::get_weekly_hours(void)
{
    return _weekly_hours;
}