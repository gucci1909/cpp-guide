#include <iostream>
using namespace std;

class Base
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void showData(void)
    {
        cout << "Data Value a " << a << endl;
        cout << "Data Value b " << b << endl;
    }
};

int main()
{
    Base *a = new Base[3];
    Base *ptemp = a;
    int p, q;

    for (int i = 0; i < 3; i++)
    {
        cin >> p >> q;
        a->setData(p, q);
        a++;
    };

    for (int i = 0; i < 3; i++)
    {
        ptemp->showData();
        ptemp++;
    };

    return 0;
}
