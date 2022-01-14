#include "Worker.hpp"

class Doctor : public Worker
{
    private:
        std::string _type;

    public:

        void set_type(std::string inputType);

        virtual void talk();

        std::string get_type(void);

};
