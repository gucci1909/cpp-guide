#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Base 2";
    }
};

class Derived : public Base1, public Base2
{
public:
    // this is how we solve ambiguity in our code base;
    void greet()
    {
        Base1::greet();
    }
};

int main()
{
    Derived a;
    a.greet(); // --> will give me Base1 greet();
    return 0;
}
