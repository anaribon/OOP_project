#include <src/Worker.hpp>

class Engineer : public Worker
{
    private:
        std::string _type;
        std::string _company;
        bool _has_master;
        bool _has_doctorate;

    public:

        Engineer(std::string fname, std::string lname, std::string g, std::string h, int w, int a, int hour, int salary, std::string t, std::string c, bool mas, bool doc);

        void set_type(std::string inputType);

        void set_company(std::string inputCompany);

        bool set_has_master(bool inputHasMaster);

        bool set_has_doctorate(bool inputHasDoctorate);

        virtual void talk();

        std::string get_type(void);

        std::string get_company(void);

        bool get_has_master(void);

        bool get_has_doctorate(void);
};