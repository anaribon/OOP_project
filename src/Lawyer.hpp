#include "Worker.hpp"

class Lawyer : public Worker
{
    private:

        std::string _law_firm;

    public:

        Lawyer(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string firm);

        void set_law_firm(std::string inputLawFirm);

        virtual void talk();

        std::string get_law_firm(void);


};