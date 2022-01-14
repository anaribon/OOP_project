#include <src/Person.hpp>

class Worker : public Person
{
    protected:
        int _salary;
        int _weekly_hours;

    public:

        virtual void talk();

        void set_salary(int inputSalary);

        void set_weekly_hours(int inputWeeklyHours);

        int get_salary(void);

        int get_weekly_hours(void);
    
};
