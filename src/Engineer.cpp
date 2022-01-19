#include "Engineer.hpp"

Engineer::Engineer(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string t, std::string c, bool mas, bool doc)
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
    this-> _company = c;
    this-> _has_master = mas;
    this-> _has_doctorate = doc;
    _person_counter++;
}

void Engineer::set_type(std::string inputType)
{
    this->_type = inputType;
}

void Engineer::set_company(std::string inputCompany)
{
    this->_company = inputCompany;
}

bool Engineer::set_has_master(bool inputHasMaster)
{
    this->_has_master = inputHasMaster;
}

bool Engineer::set_has_doctorate(bool inputHasDoctorate)
{
    this->_has_doctorate = inputHasDoctorate;
}

std::string Engineer::get_type(void)
{
    return _type;
}

std::string Engineer::get_company(void)
{
    return _company;
}

bool Engineer::get_has_master(void)
{
    return _has_master;
}

bool Engineer::get_has_doctorate(void)
{
    return _has_doctorate;
}

void Engineer::talk(void)
{
    std::cout << "Hello! I am " << this->_first_name << this-> _last_name << ", I am " 
    << this-> _type << "engineer that works" << this->_weekly_hours << "a week at " << this->_company 
    << "and I have a salary of " << this->_salary << std::endl;

}

//"Hello! I am first_name last name, I am a type engineer that works weekly_hours a
//week at company and I have a salary of salary"
//I have a masters degree: has_masters')
//I have a doctorate degree: has_doctorate'