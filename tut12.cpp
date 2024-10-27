#include <iostream>
using namespace std;


// making friend function to have private variables of complex class
class Complex
{
    int a, b;

public:
    // sumComplex will be non-member of complex but it can have private variables because it is a friend now;
    friend Complex sumComplex(Complex o1, Complex o2);
    void sum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumbers(){
        cout << a << " " << b;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.sum((o1.a+ o2.a) , (o1.b, o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.sum(1, 2);
    c2.sum(3, 4);

    sum = sumComplex(c1, c2); // <-- we cannot do sum.sumComplex, because sumComplex is just a friend , not a member
    sum.printNumbers();


    return 0;
}
