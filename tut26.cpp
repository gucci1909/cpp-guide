#include <iostream>
using namespace std;

// arrow operator points towards the object , and also dereference;

class Base
{
    int a;

public:
    void setA(int i)
    {
        a = i;
    }
    void showA(void)
    {
        cout << a << endl;
    }
};

int main()
{
    // same to same
    Base c;
    // Base *a = &c;
    Base *a = new Base;

    // both techniques are same
    // this is dereference
    // (*a).setA(123);
    // (*a).showA();

    a->setA(1);
    a->showA();

    return 0;
}
