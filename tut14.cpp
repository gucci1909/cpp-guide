#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public: 
    //   this is a constructor , it should be the same name 
    //  this is a default , because no parameters, 
    // it should be declared in public only
    // same name and no return type here
    // we cannot refer to their address;
       Complex(void);
};

Complex :: Complex(void){
    int a = 10;
    int b = 20;
};

int main(){

    return 0;
}