#include <iostream>
using namespace std;

int main(){
    // what are pointers - data types which hold the address of other data types
    // pointers in cpp
    int a = 10;
    int* b = &a; // pointer 
    int** c = &b; // pointer to pointer

    cout << b << endl; // address of a in our system RAM
    cout << *b << endl; // dereferencing value of a

    int maths[] = {12, 24, 455, 56};

    // pointer arithmetic 

    int* p = maths;

    cout << *p << endl;

    cout << *(p+1) << endl;

    cout << *(p+2) << endl;

    cout << *(p+3) << endl;

    // cout << *(p+4) << endl;



    return 0;
}
