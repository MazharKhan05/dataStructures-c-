#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> arr)
    {
        int low = 0, high = arr.size() - 1;
        while (low != high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] < arr[mid + 1])
            { //we are in asc part of array so ans lies in right side
                low = mid + 1;
            }
            else
            {
                //we are in dsc part of arr, so search in left side of arr
                // reason for high !=mid-1 is as arr[mid] > arr[mid+1] this mid could be also our soln
                high = mid;
            }
        }
        return low;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    cout << obj.peakIndexInMountainArray(nums);
    return 0;
}