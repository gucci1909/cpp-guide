#include <iostream>
using namespace std;

// OOPS
class Employee {
    private:
      int a, b, c;
    public:
      int d;
      int e;
      void sum(int a1, int b1, int c1); // <-- declare
      void getData(){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl; 
        cout << e << endl; 
      };

};

void Employee:: sum(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main()
{
    Employee account;

    account.sum(1, 2, 3);
    // account.a = 12; //  <-- it will give error here because a is inside the private 
    account.d = 13;
    account.e = 14;
    account.getData();
    
    
    return 0;
}
