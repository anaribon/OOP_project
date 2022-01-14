#include "Engineer.hpp"

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

//bool Engineer::get_has_master(void)
//{
//    return _has_master
//};

//bool Engineer::get_has_doctorate(void)
//{
//    return _has_doctorate
//};

