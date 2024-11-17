#include <bits/stdc++.h>
using namespace std;

int main()
{
    // key = value pair
    // map store unique keys , in sorted order
    map<int, int> mpp;

    // everything is sorted
    // multimap is key sorted but not unique
    // TC - O(1)
    // unordered_map is key unique but not sorted

    for (const auto &pair : mpp)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}