#include <iostream>
using namespace std;
// initialization in cpp for constructor

class Base{
    // imp a is initialize before of b here - very imp
    int a;
    int b;
    public:
        //  these two will work
    //    Base(int i, int j): a(i), b(j)
        //   Base(int i, int j): a(i), b(a+j) 
        // but this will not work because b is initialize before of a
        // Base(int i, int j):b(i), a(b+j)

          Base(int i, int j): a(i), b(a+j) {
            cout << a << endl;
            cout << b << endl;
          }
};

int main()
{
    return 0;
}
