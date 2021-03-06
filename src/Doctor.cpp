#include "Doctor.hpp"

Doctor::Doctor(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string t)
{
    this-> _first_name = fname;
    this-> _last_name = lname;
    this-> _gender = g;
    this-> _height = h;
    this-> _weight = w;
    this-> _age = a;
    this-> _weekly_hours = hour;
    this-> _salary = salary;
    this-> _type = t;
    _person_counter++;
}

void Doctor::set_type(std::string inputType)
{
    this->_type = inputType;
}

std::string Doctor::get_type(void)
{
    return this->_type;
}

void Doctor::talk(void)
{
    std::cout << "Hello! I am " << this->_first_name << this->_last_name 
    << "." << "I am a " << this->_type << "doctor that works" << this->_weekly_hours 
    << "a week and I have a salary of" << this->_salary << "." << std::endl;
}
