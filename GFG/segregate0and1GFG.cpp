#include <bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[], int n)
{
    int no_zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            no_zeros++;
        }
    }

    for (int i = 0; i < no_zeros; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }

    for (int j = no_zeros; j < n; j++)
    {
        arr[j] = 1;
        cout << arr[j] << " ";
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 0};

    segregate0and1(arr, 5);
    return 0;
}