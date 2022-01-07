#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        //search for break point, i.e nums[i] < nums[i+1]
        int breakPoint = -1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                breakPoint = i;
                break;
            }
        }
        if (breakPoint != -1)
        {
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if (nums[i] > nums[breakPoint])
                {
                    swap(nums[i], nums[breakPoint]);
                    break;
                }
            }
            reverse(nums.begin() + (breakPoint + 1), nums.end());
        }
        else
        {
            reverse(nums.begin(), nums.end());
            //no Breakpoint found this is highest ever premu rank
            // for this return first rank permu
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3};
    obj.nextPermutation(nums);

    return 0;
}