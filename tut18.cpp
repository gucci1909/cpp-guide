#include <iostream>
using namespace std;

int count=1;
class Employee {
    public:
      Employee(){
        count++;
        cout << "Constructor called" << endl;
        cout << count << endl;
      };
      ~Employee(){ // <-- Destructor called here
        count--;
        cout << "Destructor called" << endl;
        cout << count << endl;
      }
};

int main(){
    Employee a;
    {
        cout << "Entering here" << endl;
        Employee b, c; // <-- constructor will be called here
        cout << "Exiting here" << endl;
    }; // <-- here destructor will be called , because b and c ended here as the object ends
    return 0;
}