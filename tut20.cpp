#include <iostream>
using namespace std;

class Base
{
protected:
    int a = 10; // can only be used for inheritance
public:
    int b = 20;

private:
    int c = 30;
};

class derived : public Base
{
public:
    void showProtected(void)
    {

        cout << a; // here you can use protected only in this scope , but not in class main
    }
};

class derived1 : protected Base
{

public:
    void showProtectedAndPublic(void)
    {
        cout << a << " " << b;
    }

}; // all will be taken as protected , even public will be taken as protected and cannot be used in main
// important difference for derivation

// see the main difference of protected or private derivation is that , the protected class can be further inherited but the private class variables cannot be inherited
class derived4 : protected derived1
{
public:
    void showProtectedAndPublic(void)
    {
        cout << a << " " << b;
    }
};

class derived2 : private Base
{
public:
    void showProtectedAndPublic(void)
    {
        cout << a << " " << b;
    }
};

int main()
{

    derived c1;
    cout << c1.b; // can only access b here because it's public in base

    derived1 c2;
    // cout << c2.showProtectedAndPublic();

    derived2 c3;
    c3.showProtectedAndPublic();
    // cout << c2.b;

    return 0;
}