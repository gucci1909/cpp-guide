#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int> &arr, int low, int mid, int high)
{

    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
};

// reverse a array function LeetCode-Q 493
void countNoOfPair(vector<int> &arr, int low, int mid, int high, int& count)
{
    int right = mid + 1;
    cout << arr.size() << " " << low << " " << mid << " " <<  high << endl;
    for(int i =0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && (long long)arr[i] > 2 * (long long)arr[right]){

            right++;
        }
        count += (right - (mid + 1));
    }
}

void mergeAndDivide(vector<int> &arr, int low, int high, int& count)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeAndDivide(arr, low, mid, count);
    mergeAndDivide(arr, mid + 1, high, count);
    // countNoOfPair(arr, low, mid, high, count);
    merge(arr, low, mid, high);
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;

    mergeAndDivide(arr, 0, n - 1, count);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // leetCode - Q 493
    // cout << count;

    return 0;
}
