#include <iostream>
using namespace std;

// this keyword in cpp;

class Base
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
        cout << this->a << endl;
    }
    Base &setBase(int a)
    {
        this->a = a;
        return *this;
    };
    void getData(void)
    {
        cout << " " << a << endl;
    }

    // Friend function to allow cout << a
    friend ostream &operator<<(ostream &os, const Base &obj)
    {
        os << obj.a;
        return os;
    }
};

int main()
{
    Base a;
    a.setData(10);
    a.setBase(150).getData();

    return 0;
}
