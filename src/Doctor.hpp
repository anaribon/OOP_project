#include "Worker.hpp"

class Doctor : public Worker
{
    private:
        std::string _type;

    public:

        Doctor(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string t);

        void set_type(std::string inputType);

        virtual void talk();

        std::string get_type(void);

};
