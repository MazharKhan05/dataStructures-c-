#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        unordered_map<int, int> umap;
        int count = 0;
        // for(int i=0; i<nums.size()-1; i++){ //BruteForce O(n^2)
        //     for(int j=i+1;j<nums.size();j++){
        //         int diff = abs(nums[i]-nums[j]);
        //         if(diff ==  k){
        //             count++;
        //         }
        //     }
        // }

        for (int i = 0; i < nums.size(); i++)
        {
            if ((umap.find(nums[i] - k) != umap.end()) || (umap.find(nums[i] + k) != umap.end()))
            {
                count += umap[nums[i] - k] + umap[nums[i] + k];
            }
            umap[nums[i]] += 1;
        }
        return count;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 2, 1};
    int k = 1;
    obj.countKDifference(nums, k);
    return 0;
}