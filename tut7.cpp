#include<iostream>
using namespace std;

// this is function overloading
int sum(int x, int y){
    return x+y;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    // here it checks for the prototype of the function with the parameters , so if it catches sum with 2 parameters it will result take the sum function with 2 parameters

    // if the prototype of the function is for 3 arguments , it will take that function;

    cout << sum(1,3) << endl;
    cout << sum(1,2,3) << endl; 

    return 0;
}
