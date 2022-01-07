#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int subArr = 0;
        int sum = 0;
        map<int, int> preSum;
        preSum[sum] = 1; //To handle edge case when subarray is present at 0th index itself
        // vector<vector<int>> arr;
        // vector<int> sing;
        // for(int i=0;i<nums.size();i++){     //naive approach no->1
        //     for(int j=i;j<nums.size();j++){
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //         }
        //         if(sum==k){
        //             subArr+=1;
        //         }
        //         sum=0;
        //     }
        // }
        // for (int i = 0; i < nums.size(); i++)   //optimized naive approach-> 2
        // {
        //     for (int j = i; j < nums.size(); j++)
        //     {
        //         sum += nums[j];
        //         if (sum == k)
        //         {
        //             subArr += 1;
        //         }
        //     }
        //     sum = 0;
        // }
        for (int i = 0; i < nums.size(); i++) //For worst case complexity will be O(nlogn), map takes logn time to perform opts like find, insert,etc
        {
            sum += nums[i];
            if (preSum.find(sum - k) != preSum.end()) //if sum-k prefixSum is found that means subArr with K sum is also found so add the val of that sum-k
            {
                subArr += preSum[sum - k];
            }
            preSum[sum] += 1;
        }
        return subArr;
    }
};
int main()
{
    vector<int> arr = {-1, -1, 1};
    int target = 0;
    Solution obj;
    cout << obj.subarraySum(arr, target);
    return 0;
}