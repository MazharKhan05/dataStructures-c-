#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> allPerm;
    // void permutation(vector<int> nums) //T Complexity -->O(n! * nums.size())
    // {
    //     int breakPoint = -11;
    //     int count = 0;
    //     for (int i = nums.size() - 2; i >= 0; i--)
    //     {
    //         if (nums[i] < nums[i + 1])
    //         {
    //             breakPoint = i;
    //             break;
    //         }
    //     }
    //     if (breakPoint != -11)
    //     {
    //         for (int j = nums.size() - 1; j >= 0; j--)
    //         {
    //             count++;
    //             if (nums[j] > nums[breakPoint])
    //             {
    //                 swap(nums[breakPoint], nums[j]);
    //                 break;
    //             }
    //         }
    //         reverse((nums.begin() + (breakPoint + 1)), nums.end());
    //         allPerm.push_back(nums);
    //     }
    //     else
    //     {
    //         reverse(nums.begin(), nums.end());
    //         allPerm.push_back(nums);
    //     }
    // }
    vector<vector<int>> permute(vector<int> &nums)
    {
        allPerm.push_back({nums[0]});

        // if (nums.size() == 1)
        // {
        //     return allPerm;
        // }
        for (int i = 1; i < nums.size(); i++)
        {
            vector<vector<int>> temp;
            for (int j = 0; j < allPerm.size(); j++)
            {
                auto perm = allPerm[j];

                for (int k = 0; k <= perm.size(); k++)
                {

                    perm.insert(perm.begin() + k, nums[i]);
                    temp.push_back(perm);
                    perm = allPerm[j];
                }
            }
            allPerm = temp;
        }
        // permutation(allPerm[0]);
        // while (allPerm[i] != nums)
        // {
        //     permutation(allPerm[i]);
        //     i++;
        // }
        // cout << "Final count is " << count;
        // allPerm.pop_back();
        return allPerm;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2};
    vector<vector<int>> ans = obj.permute(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}