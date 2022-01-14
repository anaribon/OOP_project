#include "Doctor.hpp"

void Doctor::set_type(std::string inputType)
{
    this->_type = inputType;
}

std::string Doctor::get_type(void)
{
    return _type;
}
