#include <bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> resArr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            resArr.push_back(i + 1);
        }
    }

    for (int i : resArr)
    {
        cout << i << " ";
    }

    return resArr;
}

int main()
{

    int n = 1;
    int arr[] = {1};
    valueEqualToIndex(arr, n);
    return 0;
}