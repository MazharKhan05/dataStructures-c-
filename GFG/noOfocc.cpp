#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    int count = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "Current mid is " << mid << " ";

        if ((arr[mid - 1] < arr[mid]) && (arr[mid] > arr[mid + 1]))
        {
            return arr[mid];
        }
        if ((arr[mid - 1] > arr[mid]) && (arr[mid] > arr[mid + 1]))
        {
            high = mid - 1;
        }
        if ((arr[mid - 1] < arr[mid]) && (arr[mid] < arr[mid + 1]))
        {
            low = mid + 1;
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {45, 47, 50, 5, 3, 2, 1};
    cout << count(arr, n);
    return 0;
}