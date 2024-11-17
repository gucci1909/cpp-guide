#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lenOfSubArray(vector<int> &, int);

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = lenOfSubArray(arr, 15);

    cout << len;
    return 0;
}

int lenOfSubArray(vector<int> &nums, int k)
{
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            maxSum = max(i + 1, maxSum);
        }

        int val = sum - k;
        if (mpp.find(val) != mpp.end())
        {
            int temp = i - mpp[val];
            maxSum = max(maxSum, temp);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }

    return maxSum;
}