#include <iostream>
using namespace std;

class Employee;

// BASIC INHERITANCE

class Employee
{
    int id;

public:
    int salary;
    Employee(int v1)
    {
        id = v1;
        salary = 34;
    }
    Employee() {}
    void show(void)
    {
        cout << id << endl;
        cout << "Hello Employee!!" << endl;
    }
};

class Programmer : public Employee // <-- private of Employee will never come here and by default every thing comes from Employee as private and to make public of Employee , write public here for Employee
{
    int coder;

public:
    Programmer(int v1)
    {
        coder = v1;
    };
    void show(void)
    {
        cout << coder << endl;
        cout << "Hello Programmer!!" << endl;
    }
};

int main()
{
    Employee a(2);
    a.show();

    Programmer ankit(1);
    ankit.show();
    cout << ankit.salary;

    return 0;
}