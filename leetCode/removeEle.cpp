#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i, j = 1;
        int remEle = 0;
        if (nums.size() == 0)
        {
            return 0;
        }
        else if (nums.size() == 1 && nums[0] != val)
        {
            return 1;
        }
        for (i = 0; i < nums.size() - 1;)
        {
            if ((nums[i] == val) && (nums[i] != nums[j]))
            {
                swap(nums[i], nums[j]);
            }
            else if ((nums[i] == val) && (nums[i] == nums[j]))
            {
                j++;
                if (j == nums.size())
                {
                    break;
                }
                continue;
            }
            remEle++;
            i++, j = i + 1;
        }
        if (i == nums.size() - 1 && nums[i] != val)
        {
            remEle++;
        }
        return remEle;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    obj.removeElement(nums, val);
    return 0;
}