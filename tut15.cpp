#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void print(void){
        cout << a << " " << b << endl;
    }
};

Complex::Complex(int x, int y) //<-- parameter Constructor
{ 
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(1, 2);
    a.print();

    // explicit call
    Complex b = Complex(3, 4);
    b.print();



    return 0;
}