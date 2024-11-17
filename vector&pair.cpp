#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 3}, {344, 56}, {456, 56}};

    cout << arr[0].second << endl;

    vector<int> ans(3, 1);

    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    vector<int> arr1;
    arr1.emplace_back(1);
    arr1.emplace_back(2);

    arr1.emplace_back(3);

    vector<int> arr2(4, 0);
    vector<int> arr3(arr2);

    // iterator
    // vector<int> ::iterator it = arr2.begin();
    // it++;
    // cout << *it << endl;

    vector<int>::iterator it2 = arr2.end(); // <-- it points to point right after n-1;
    it2--;
    cout << *it2 << endl;

    cout << arr2.back() << endl; // <-- last guy

    auto it3 = arr2.rbegin();
    cout << *it3 << endl;

    auto it4 = arr2.rend();
    it4--;
    cout << *it4 << endl;

    arr2.erase(arr2.begin() + 1);

    arr2.erase(arr2.begin(), arr2.begin() + 2);

    cout << arr2.size() << endl;

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();

    return 0;
}
