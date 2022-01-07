#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInd(vector<int> nums, int target)
    {
        int start = 0, end = 1;
        int newS;

        while (nums[end] < target)
        {
            newS = end + 1;
            end = end + (end - start + 1) * 2;
            start = newS;
            cout << start << " " << end;
        }

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int target = 10;
    cout << obj.searchInd(nums, target);
    return 0;
}