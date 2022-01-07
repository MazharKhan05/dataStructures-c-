#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        vector<int> reqVec;
        // unordered_map<int, int> umap; //Approach 1: using hashMap and sorting O[nlog(n)]
        // for (int i = 0; i < n; i++)
        // {
        //     umap[arr[i]] += 1;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (umap[arr[i]] > 1)
        //     {
        //         int currCount = umap[arr[i]];
        //         reqVec.push_back(arr[i]);
        //         umap[arr[i]] -= currCount;
        //     }
        // }

        // unordered_set<int> uset1; //Approach 2: using 2 set's and sorting O[nlog(n)]
        // unordered_set<int> uset;
        //T. Complexity nLogn
        // for (int i = 0; i < n; i++)
        // {
        //     if (uset.find(arr[i]) == uset.end())
        //     {
        //         uset.insert(arr[i]); //New distinct ele
        //     }
        //     else
        //     {
        //         uset1.insert(arr[i]);
        //     }
        // }

        // for (int j : uset1)
        // {
        //     reqVec.push_back(j);
        // }
        // sort(reqVec.begin(), reqVec.end());

        // Approach 3: using same array freq/count array O[n]
        for (int i = 0; i < n; i++)
        {
            int ind = arr[i] % n;
            arr[ind] = arr[ind] + n;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] / n > 1)
            {
                reqVec.push_back(i);
            }
        }
        if (reqVec.empty())
        {
            reqVec.push_back(-1);
        }
        return reqVec;
    }
};
int main()
{

    int N = 10;
    int a[N] = {1, 2, 1, 9, 4, 2, 3, 1, 9, 2};
    Solution obj;
    vector<int> res = obj.duplicates(a, N);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}