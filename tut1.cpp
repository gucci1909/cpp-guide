#include <iostream>
#include <iomanip>
using namespace std;

int c = 45; // global variable 

int main()
{
    /* code */
    int num1;
    int num2;
    int c = 10;

    float f = 34.4F;
    long double e = 34.4L;

    // 34.4f have to pass with f in a function to tell the function the number is float;
    cout << sizeof(34.4f) << endl; // get the bytes with sizeOf

    // constant in variable
    const int a = 15;
    cout << a << endl;
    // a = 14; will get error here because it is constant;

    // manipulators
    int fg = 1, g = 15, h = 115;
    cout << setw(3) << fg << endl;
    cout << setw(3) << g << endl;
    cout << setw(3) << h << endl;


    int x = 34; 
    int & y = x; // reference of x to y
    cout << x << endl;
    cout << y << endl;


    int num123 = 123;
    float num456 = 13.5;
    // this is typecasting in cpp
    cout << float(num123) << endl;
    cout << int(num456) << endl;



    cout << c << endl; // local variable
    cout << ::c << endl; // global variable

    cout << "enter numbers" << endl; /* insertion operator */

    cin >> num1; /* extraction operator */

    cin >> num2;

    cout<< num1+num2;
    
    return 0;
}
