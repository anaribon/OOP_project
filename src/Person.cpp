#include "Person.hpp"


void Person::set_first_name(std::string inputFirstName)
{
    this->_first_name = inputFirstName;
}

void Person::set_last_name(std::string inputLastName)
{
    this->_last_name = inputLastName;
}

void Person::set_age(int inputAge)
{
    this->_age = inputAge;
}

void Person::set_gender(std::string inputGender)
{
    this->_gender = inputGender;
}

void Person::set_height(std::string inputHeight)
{
    this->_height = inputHeight;
}

void Person::set_weight(int inputWeight)
{
    this->_weight = inputWeight;
}

std::string Person::get_first_name(void)
{
    return _first_name;
}

std::string Person::get_last_name(void)
{
    return _last_name;
}

int Person::get_age(void)
{
    return _age;
}

std::string Person::get_gender(void)
{
    return _gender;
}

std::string Person::get_height(void)
{
    return _height;
}

int Person::get_weight(void)
{
    return _weight;
}

