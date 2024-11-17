#include <bits/stdc++.h>
using namespace std;

int main()
{
    // everything is sorted and unique
    set<int> s1;

    s1.insert(1);
    s1.insert(10);
    s1.insert(10); // <-- will not add
    s1.insert(5);

    // everything is sorted
    // multiset is sorted but not unique
    // TC - O(1)
    // unordered_set is unique but not sorted

    cout << s1.size();

    return 0;
}