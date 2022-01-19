#include <src/Person.hpp>

class Student : public Person
{
    private:
        std::string _institution;
        std::string _major;

    public:
        
        Student(std::string fname, std::string lname, std::string g, std::string h, int w, int a, std::string i, std::string major); 

        virtual void talk();

        void set_institution(std::string inputInstitution);

        void set_major(int inputMajor);

        std::string get_institution(void);

        std::string get_major(void);
};