#include <iostream>
using namespace std;

// this is using the address to change the value of the arguments
// int & -> returning returning reference 
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

// this is using dereferencing by pointer address
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 12;
    cout << a << endl << b << endl;

    // call by using reference variable  


    swap(a, b);

    // swap(a,b) = 567; returning reference will make a value of address to 567
    cout << a << endl << b << endl;

    // call by using pointer reference
    swapPointer(&a, &b); // sending the addresses

    cout << a << endl << b << endl;
    
    /* code */
    return 0;
}
