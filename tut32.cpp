#include <iostream>
using namespace std;

// function template
template <class T1>
void sum(T1 a, T1 b){
    cout << a+b;
}

int main()
{
    sum<int>(1.2,2.2);
    return 0;
}
