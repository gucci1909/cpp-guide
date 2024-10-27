#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 122;
        cin >> id;
    };
    void getID(void)
    {
        cout << id << endl;
    };
};

int main()
{
    Employee deepak[4];

    for (int i = 0; i < 4; i++)
    {
        deepak[i].setID();
        deepak[i].getID();
    }

    cout << deepak << endl;

    return 0;
}
