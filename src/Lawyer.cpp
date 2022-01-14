#include "Lawyer.hpp"

void Lawyer::set_law_firm(std::string inputLawFirm)
{
    this->_law_firm = inputLawFirm;
}

std::string Lawyer :: get_law_firm(void)
{
    return _law_firm;
}