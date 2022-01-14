#include <iostream>
#include <string>

class Person
{

protected:

    std::string _first_name;
    std::string _last_name;
    int _age;
    std::string _gender;
    std::string _height;
    int _weight;
    static int _person_counter;

public:

    virtual void talk() = 0;
    
    //setters

    void set_first_name(std::string inputFirstName);

    void set_last_name(std::string inputLastName);

    void set_age(int inputAge);

    void set_gender(std::string inputGender);

    void set_height(std::string inputHeight);

    void set_weight(int inputWeight);

    //getters

    std::string get_first_name(void);

    std::string get_last_name(void);

    int get_age(void);

    std::string get_gender(void);

    std::string get_height(void);

    int get_weight(void);


};

