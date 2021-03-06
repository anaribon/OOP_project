#include "Student.hpp"

Student::Student(std::string fname, std::string lname, std::string g, std::string h, int w, int a, std::string i, std::string major)
{
    this-> _first_name = fname;
    this-> _last_name = lname;
    this-> _gender = g;
    this-> _height = h;
    this-> _weight = w;
    this-> _age = a;
    this-> _institution = i;
    this-> _major = major;
    _person_counter++;
}

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
    return this->_institution;
}

std::string Student::get_major(void)
{
    return this->_major;
}

void Student::talk(void)
{
    	std::cout << "Hello! I am" << this->_first_name << this->_last_name
        << ". I am a student at" << this->_institution << ", studying" << this->_major << std::endl;
}
