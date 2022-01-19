#include "Lawyer.hpp"

Lawyer::Lawyer(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string firm)
{
    this-> _first_name = fname;
    this-> _last_name = lname;
    this-> _gender = g;
    this-> _height = h;
    this-> _weight = w;
    this-> _age = a;
    this-> _weekly_hours = hour;
    this-> _salary = salary;
    this-> _law_firm = firm;
    _person_counter++;
}

void Lawyer::set_law_firm(std::string inputLawFirm)
{
    this->_law_firm = inputLawFirm;
}

std::string Lawyer :: get_law_firm(void)
{
    return _law_firm;
}