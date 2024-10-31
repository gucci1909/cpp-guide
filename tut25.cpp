#include <iostream>
using namespace std;

// delete and new keyword

int main()
{
    int a = 10;
    int *p = &a;
    cout << *(p) << endl;

    int *ptr = new int(8);

    int *gg = new int[2]; 
    gg[0] = 67;
    gg[1] = 56;
    // delete[] gg;
    // delete ptr;
    cout << *(ptr) << endl; 
    cout << gg[0] << endl;

    return 0;
}
