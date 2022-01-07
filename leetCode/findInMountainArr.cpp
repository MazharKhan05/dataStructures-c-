#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(int target, vector<int> nums, int low, int high)
    {
        while (low <= high)
        { //For first ascending order
            int ascMid = (low + high) / 2;
            if (nums[ascMid] == target)
            {
                return ascMid;
            }
            else if (nums[ascMid] > target)
            {
                high = ascMid - 1;
            }
            else
            {
                low = ascMid + 1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, vector<int> nums)
    {
        //first find peak index
        int low = 0, high = nums.size() - 1;
        while (low != high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] < nums[mid + 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        int peak = low;

        int firstAns = search(target, nums, 0, peak);
        if (firstAns == -1)
        {
            return search(target, nums, peak, nums.size() - 1);
        }
        return firstAns;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {0, 1, 2, 4, 2, 1};
    int target = 3;
    cout << obj.findInMountainArray(target, nums);
    return 0;
}