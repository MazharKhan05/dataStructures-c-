#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        vector<int> resVec;
        int start = 0;
        int end = 0;
        if ((nums.size() == 1) && (nums[0] == target))
        {
            resVec.push_back(0);
            resVec.push_back(0);
            return resVec;
        }
        while (low <= high)
        { //For left half ie.first half
            int mid = (low + high) / 2;
            // cout << "mid is " << mid << " ";
            if ((nums[mid] == target))
            {
                if ((mid == 0) && (nums[mid] == target))
                {
                    start = mid;
                    resVec.push_back(start);
                    break;
                }
                if ((mid > 0) && (nums[mid - 1] != target))
                {
                    start = mid;
                    resVec.push_back(start);
                    break;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        low = 0, high = nums.size() - 1;
        while (low <= high)
        { //For right half ie.first half
            int mid = (low + high) / 2;
            if ((nums[mid] == target))
            {
                if ((mid == nums.size() - 1) && (nums[mid] == target))
                {
                    end = mid;
                    resVec.push_back(end);
                    return resVec;
                }
                if ((mid < nums.size() - 1) && (nums[mid + 1] != target))
                {
                    end = mid;
                    resVec.push_back(end);
                    return resVec;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {-1, -1};
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    obj.searchRange(nums, target);
}