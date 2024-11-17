#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max priority queue
    priority_queue<int> p1;
    p1.push(2);
    p1.push(3);
    p1.push(1);

    cout << p1.top() << endl;

    // min priority queue

    priority_queue<int, vector<int>, greater<int>> p2;
    p2.push(4);
    p2.push(0);
    p2.push(30);

    cout << p2.top() << endl;

    return 0;
}