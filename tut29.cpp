#include <iostream>
using namespace std;
// important

//  this is pointers to derived class;

class Base
{
public:
    int var_base;
    // when display of base will run from &obj to base -- base =& obj , then this display will run , this is late binding;
    // void display(int a)
    // when display of base will run from &obj to base -- base =& obj , then the display of derived will run as it is a virtual function;
    virtual void display(int a)
    {
        this->var_base = a;
        cout << "the value of base var_base " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display(int a)
    {
        this->var_derived = a;
        cout << "the value of base var_derived " << var_derived << endl;
    }
    void run_time_check(void)
    {
        cout << "run time check derived" << endl;
    }
};

int main()
{
    // Base *base;
    Derived obj;
    // base = &obj;      // <-- this is pointing to derived class
    // base->display(1); // <-- but this will call display of Base class because in run time we decide which display to call.
    // base->run_time_check(); // <-- this will give an error

    Derived *derived;
    derived = &obj;
    derived->var_base = 12; // <-- this is base class variable;
    derived->display(100);
    derived->run_time_check(); // <-- this will work now;

    // virtual function, above we saw display of base was implemented even after giving & obj of derived, because in run time it saw the display of base

    // so now I will make function of base as virtual for display then in run time the display of derived will be taken
    Base *base;
    base = &obj;        // <-- this is pointing to derived class
    base->display(345); // <-- but this will call display of derived class because in run time we will see virtual display of base to call.
    // base->run_time_check(); // <-- this will give an error
    return 0;
}
