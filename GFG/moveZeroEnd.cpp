#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    vector<int> a(n);

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {

            a[j] = arr[i];
            // cout << a[j] << " ";
            j++;
        }
    }

    for (int i : a)
    {
        cout << i << " ";
    }
}

int main()
{

    int n = 5;
    int arr[] = {3, 5, 0, 0, 4};
    pushZerosToEnd(arr, 5);
    return 0;
}