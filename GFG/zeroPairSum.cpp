#include <bits/stdc++.h>
using namespace std;

int ZeroPairSum(int n, vector<int> arr)
{
    int count = 0;
    int i = 0, j = arr.size() - 1;
    if (arr.size() <= 1)
    {
        return count;
    }
    while (i < j)
    {
        if (((arr[i] >= 0) || (arr[i] <= 0)) && ((arr[i] == -arr[j]) || (arr[j] == -arr[i])) && (arr[i] + arr[j] == 0))
        {
            count++;
            j--;
            if ((i == j) && (arr.size() - i >= 1))
            {
                i++;
                j = arr.size() - 1;
            }
        }
        else
        {
            j--;
            if ((i == j) && (arr.size() - i >= 1))
            {
                i++;
                j = arr.size() - 1;
            }
        }
    }
    return count;
}

int main()
{
    int n = 1;
    vector<int> arr = {5};
    cout << ZeroPairSum(n, arr);
    return 0;
}