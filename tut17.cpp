#include <iostream>
using namespace std;

// copy constructor
class Number
{
    int a;

public:
    Number(void)
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    // when no copy constructor is there, complier supplies it's own copy constructor;
    // so even if I remove it , my copy constructor will itself make this
    Number(Number &obj1)
    {
        cout << "Copy constructor called !!" << endl;
        a = obj1.a;
    }
    void show(void)
    {
        cout << a << endl;
    }
};

int main()
{
    Number a, b, c(45), z2;
    a.show();
    b.show();
    c.show();

    Number x(c); // Copy constructor will invoke
    x.show();

    z2 = c; // Copy constructor will not invoke as z2 was initialize in line 33;

    Number z3 = c; // Copy constructor will invoke as it is initialize here only

    return 0;
}