#include "Student.hpp"

void Student::set_institution(std::string inputInstitution)
{
    this->_institution = inputInstitution;
}

void Student::set_major(int inputMajor)
{
    this->_major = inputMajor;
}

std::string Student::get_institution(void)
{
    return _institution;
}

std::string Student::get_major(void)
{
    return _major;
}