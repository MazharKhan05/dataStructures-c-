#include <bits/stdc++.h>
using namespace std;

void convertToWave(vector<int> &arr, int n)
{

    if (n % 2 != 0)
    {
        n = n - 1;
    }
    int temp;
    for (int i = 0; i < n; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> arr = {2, 4, 7, 8, 9, 10};
    convertToWave(arr, 6);

    return 0;
}