#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    int missingSum = 0;
    int realSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        missingSum += array[i];
    }
    for (int j = 0; j <= n; j++)
    {
        realSum += j;
    }
    int sumDiff = realSum - missingSum;

    return sumDiff;
}

int main()
{
    int n = 10;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    MissingNumber(arr, n);
    return 0;
}