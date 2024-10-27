#include <iostream>
using namespace std;

// Forward Declaration
class Complex; // <-- we are declaring here to have compiler know that Employee have Complex and Complex will come in next lines of code

class Employee
{
    int add(int a, int b)
    {
        return a + b;
    }
    int diff(Complex, Complex); // <-- friend function from Complex
};

class Complex
{
    int a, b;
    // making a friend for Employee class . this is for individual functions
    // friend int Employee ::diff(Complex o1, Complex o2);

    // full class friend
    friend class Employee;

public:
    void add(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumbers(void)
    {
        cout << a << " " << b;
    }
};

int Employee ::diff(Complex o1, Complex o2)
{
    int a = o1.a - o2.a;
    return a;
}

int main()
{
    return 0;
}
