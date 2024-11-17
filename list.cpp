#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(0);
    ls.push_front(1);

    ls.emplace_back(1);
    ls.emplace_front(0);

   // To iterate through the list, we use an iterator
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << endl;
    }

  

    return 0;
}