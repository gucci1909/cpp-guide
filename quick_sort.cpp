#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partitionIndex(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high - 1 && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= low + 1 && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSortDivideAndConquer(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partitionIndex(arr, low, high);
        quickSortDivideAndConquer(arr, low, pIndex - 1);
        quickSortDivideAndConquer(arr, pIndex + 1, high);
    }


}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSortDivideAndConquer(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
