#include "Worker.hpp"

class Lawyer : public Worker
{
    private:

        std::string _law_firm;

    public:

        void set_law_firm(std::string inputLawFirm);

        virtual void talk();

        std::string get_law_firm(void);


};