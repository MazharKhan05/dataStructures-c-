#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countDistinct(int A[], int n, int k)
    {
        int i = 0;
        int j = 1;
        vector<int> resVec;
        unordered_map<int, int> umap;
        int distCount = 0;
        umap[A[i]] += 1;
        distCount += 1;
        int winCount = 1;
        while ((j <= n) && (i <= j))
        {
            if (winCount != k)
            {
                if (umap[A[j]] >= 1)
                {
                    umap[A[j]] += 1;
                }
                else
                {
                    distCount += 1;
                    umap[A[j]] += 1;
                    // cout << distCount << " distC for " << A[j] << " ";
                }

                winCount += 1;
                // cout << winCount << " window for " << A[j] << " ";
                j++;
            }
            else
            {
                resVec.push_back(distCount);

                i++;
                if (umap[A[i - 1]] > 1)
                {
                    umap[A[i - 1]] -= 1;
                    winCount -= 1;
                    // cout << "Window sze dec " << winCount << endl;
                }
                else
                {
                    distCount -= 1;
                    umap[A[i - 1]] -= 1;
                    winCount -= 1;
                }
            }
        }
        return resVec;
    }
};
int main()
{
    Solution obj;
    int n = 3, k = 2;
    int A[n] = {4, 1, 1};
    vector<int> res = obj.countDistinct(A, n, k);
    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}