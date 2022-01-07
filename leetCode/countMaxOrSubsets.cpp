#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMaxOrSubsets(vector<int> &nums)
    {
        int size = nums.size();
        int bitMasks = (1 << size); //This is 2^size.
        int maxOr = 0;
        int currOr = 0;
        int cnt = 0;
        cout << bitMasks << " ";
        vector<vector<int>> subsets;
        for (int i = 0; i < size; i++)
        {
            maxOr = maxOr | nums[i];
        }
        for (int mask = 0; mask < bitMasks; mask++)
        {
            currOr = 0;
            vector<int> subset;
            for (int i = 0; i < size; i++)
            {
                if ((mask & (1 << i)) != 0)
                {
                    currOr = currOr | nums[i];
                    subset.push_back(nums[i]);
                }
            }
            subsets.push_back(subset);
            if (currOr == maxOr)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3};
    obj.countMaxOrSubsets(nums);
    return 0;
}