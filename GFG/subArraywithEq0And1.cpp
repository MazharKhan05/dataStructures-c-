#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> umap;
        int currSum = 0;
        int maxLen = 0;
        // umap[currSum] = -1; //Before start array sum will be 0 at ind -1
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = -1;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            if (currSum == 0)
            {
                maxLen = max(maxLen, (i + 1 - 0));
            }
            if (umap.find(currSum) != umap.end())
            {
                maxLen = max(maxLen, (i - umap[currSum]));
            }
            else
            {
                umap[currSum] = i; // always put first occurence of prefixSum in hashmap so as to maximize the len of subarray (Equal 0 and 1),
                                   // if prefixSum doesnt exist put it in hashmap
            }
        }
        return maxLen;
    }
};

int main()
{
    vector<int> nums = {1, 0, 0, 1, 0, 1, 1};
    Solution obj;
    cout << obj.findMaxLength(nums);
}