#include <src/Person.hpp>

class Worker : public Person
{
    protected:
        int _salary;
        int _weekly_hours;

    public:

        Worker() = default;

        Worker(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int salary, int hours);

        virtual void talk();

        void set_salary(int inputSalary);

        void set_weekly_hours(int inputWeeklyHours);

        int get_salary(void);

        int get_weekly_hours(void);
    
};
