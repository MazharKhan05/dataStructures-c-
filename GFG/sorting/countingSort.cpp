#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countSort(string arr)
    {
        //Asymptotic T.C->O(n)
        int max = *max_element(arr.begin(), arr.end());
        int min = *min_element(arr.begin(), arr.end());
        string ans;
        int range = max - min + 1;
        vector<int> count(range, 0);
        ans.resize(arr.size());
        for (int i = 0; i < arr.size(); i++)
        {
            count[arr[i] - min] += 1;
        }
        for (int i = 1; i < count.size(); i++)
        {
            count[i] = count[i - 1] + count[i]; //count of all prev ele and current ele
        }
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            // cout << count[arr[i]-min] << " ";
            ans[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    string arr = "aecdad";
    obj.countSort(arr);
}