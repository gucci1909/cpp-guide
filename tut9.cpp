#include <iostream>
using namespace std;

class Employee
{
    int id;
    // static data member , one variable can be shared for umang, vidur and deepak;
    static int count; // static help to hold the value because it takes only one memory

public:
    void setData(void)
    {
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << count << endl;
    }
    static void getCount(void){
        // cout << id; // cannot access id because it is not static;
        cout << count;
    }
};

int Employee ::count;

int main()
{

    Employee umang, vidur, deepak;
    umang.setData();
    umang.getData();
    Employee::getCount(); // how to call static function

    vidur.setData();
    vidur.getData();

    deepak.setData();
    deepak.getData();

    return 0;
}
