#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n); //nlogn
    int sum = 0;
    int i = 0;
    int j = n - 1;
    //Below method's time complexity is O(n)
    while (i < j) //O(n)
    {
        cout << " i and j are " << i << " " << j;
        sum = arr[i] + arr[j];
        cout << "sum is " << sum;
        if (sum > x)
        {
            j--;
        }
        if (sum < x)
        {
            i++;
        }
        if (sum == x)
        {
            return true;
        }
    }

    // Below soln gives a total time complexity of O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         // cout << "Current value of fisrt and second " << arr[i] << " " << arr[j] << endl;
    //         if ((arr[i] + arr[j] == x) && (i != j))
    //         {
    //             cout << "Current value of fisrt and second " << arr[i] << " " << arr[j] << endl;

    //             return true;
    //         }
    //     }
    // }

    return false;
}

int main()
{
    int n = 5, x = 10;
    int arr[] = {1, 2, 4, 3, 6};
    hasArrayTwoCandidates(arr, n, x);
    return 0;
}