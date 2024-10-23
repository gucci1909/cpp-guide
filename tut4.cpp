#include <iostream>
using namespace std;

void sum(int, int); // function prototype , as the function is execution is after main , we are giving a prototype that this function may exist, please check this

int main(){

    int a = 10;
    int b = 15;
    sum(a,b);

    return 0;
}

void sum(int a, int b){
    cout << a+b << endl;
}