#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topK(vector<int> &nums, int k)
    {
        map<int, int> countM;
        vector<pair<int, int>> topK(countM.size());
        vector<int> ans(k); //T.C->O(mlogm) Consider t.c of highest degree and ignore rest
        for (int i = 0; i < nums.size(); i++)
        {
            countM[nums[i]] += 1;
        }
        for (auto i : countM)
        {
            topK.push_back(make_pair(i.second, i.first));
        }
        sort(topK.begin(), topK.end()); // m->distict count nums
        int i = topK.size() - 1, j = 0;
        while (k != 0)
        {
            ans[j] = topK[i].second;
            i--;
            j++;
            k--;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    Solution obj;
    obj.topK(nums, k);
}