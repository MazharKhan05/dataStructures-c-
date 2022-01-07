#include <bits/stdc++.h>
using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
    int sum = INT_MIN;
    for (int i = 1; i < arr.size() - 1; i++)
    {
        for (int j = 1; j < arr.size() - 1; j++)
        {
            // now for each mid-ele of glassHour calc sum
            int currSum = (arr[i][j] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
            sum = max(sum, currSum);
            currSum = 0;
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 0, 0, 0}, {0, 1, 0, 0, 0, 0}, {1, 1, 1, 0, 0, 0}, {0, 0, 2, 4, 4, 0}, {0, 0, 0, 2, 0, 0}, {0, 0, 1, 2, 4, 0}};

    cout << hourglassSum(arr);
    return 0;
}