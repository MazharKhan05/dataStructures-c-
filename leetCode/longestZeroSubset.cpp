#include <bits/stdc++.h>
using namespace std;
#include <vector>

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int sum = 0;
    int iniSum = 0;
    unordered_map<int, int> umap;
    umap[0] = -1;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (umap.find(sum) != umap.end())
        {
            maxLen = max(maxLen, i - umap[sum]);
        }
        else
        {
            
            umap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {1, -1, 2, -2};
    cout << LongestSubsetWithZeroSum(arr);
    return 0;
}