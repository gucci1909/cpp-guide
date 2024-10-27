#include <iostream>
using namespace std;

class Employee
{
    int a;
    int b;

public:
    void sum(int v1, int v2)
    {
        a = v1;
        b = v2;
    };

    void sumByAll(Employee o1, Employee o2) // <-- using class here as argu
    {

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printAllNumbers(void)
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Employee c1, c2, c3;
    c1.sum(1, 2);
    c1.printAllNumbers();

    c2.sum(3, 4);
    c2.printAllNumbers();

    c3.sumByAll(c1, c2); // <-- passing a class here like this
    c3.printAllNumbers();

    return 0;
}
