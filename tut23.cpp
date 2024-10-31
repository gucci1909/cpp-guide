#include <iostream>
using namespace std;

// inheritence constructor

class Base1 {
    int a;
    public:
      Base1(int v1){
        a = v1;
      }
      void printBase1(void){
        cout << "the base 1 a value " << a << endl;
      }
};

class Base2 {
    int a;
    public:
      Base2(int v1){
        a = v1;
      }
      void printBase2(void){
        cout << "the base 2 a value " << a << endl;
      }
};

class d:public Base1, public Base2 {
    int a;
    public:
      d(int v1, int v2, int v3): Base1(v1), Base2(v2){
        a = v3;
      }
      void printD(void){
        cout << "the d a value " << a << endl;
      }
};


int main()
{   d a(1, 2, 3);
    a.printBase1();
    a.printBase2();
    a.printD();
    return 0;
}
