#include <bits/stdc++.h>
using namespace std;

int main()
{
    // FIFO
    queue<int> q1;
    q1.push(1); //{1}
    q1.push(2); //{1, 2}
    q1.push(3); //{1,2,3}

    cout << q1.back() << endl;

    cout << q1.front() << endl;

    q1.pop(); //--> 1

    cout << q1.back();

    return 0;
}