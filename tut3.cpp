#include <iostream>
using namespace std;

typedef struct employee // we make this for different type of data types in one place
{
    int eID;
    char favChar;
    float salary;
} ekr; // any name you can give 


union money // we make this for different type of data types in one place
{
    int cash;
    char upi;
};

int main(){

    enum Meal{breakfast, lunch , dinner}; // 0, 1, 2
    cout << lunch << endl;

    union money account;
    account.cash = 10;
    account.upi = '1';
    cout << account.cash << endl; // now I will get garbage value here for cash because union do memory management and changes only one datatype at a time (memory is shared)
    cout << account.upi << endl;
    
    ekr name12;
    name12.eID = 13;
    cout << name12.eID << endl;

    return 0;
}
