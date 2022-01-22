#include "Worker.hpp"


Worker::Worker(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int salary, int hours)
{
    this-> _first_name = fname;
    this-> _last_name = lname;
    this->_gender = g;
    this->_height = h;
    this->_weight = w;
    this->_age = a;
    this->_salary = salary;
    this->_weekly_hours = hours;
    _person_counter++;
}

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

void Worker::talk(void)
{
    std::cout << "Hello! I am " << this->_first_name << this->_last_name 
    << "." << "I am a worker that works " << this->_weekly_hours << "a week and I have a salary of"
     << this->_salary << std::endl;
}

