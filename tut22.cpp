#include <iostream>
using namespace std;

// virtual classes

class Base
{
public:
    void first_name(void)
    {
        cout << "Hello world!";
    }
};

class Base1 : virtual public Base
{
public:
    void second_name(void)
    {
        cout << "Base 2";
    }
};

class Base2 : virtual public Base
{
public:
    void third_name(void)
    {
        cout << "Base 3";
    }
};

class Base3 : public Base1, public Base2
{
public:
    void fourth_name(void)
    {
        cout << "Base 4";
    }
};

int main()
{
    Base3 a;
    a.first_name();
    return 0;
}
