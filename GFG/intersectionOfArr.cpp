#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        unordered_set<int> uset;
        unordered_map<int, int> umap;
        // int count = 0;   //O(n+m)
        for (int i = 0; i < n; i++)
        {
            uset.insert(a[i]);
        }
        for (int j = 0; j < m; j++)
        {
            if ((uset.find(b[j]) != uset.end()))
            {
                umap[b[j]] += 1;
            }
        }
        return umap.size();
    }
};

int main()
{
    Solution obj;
    int n = 45, m = 10;
    int a[n] = {52, 61, 74, 43, 59, 56, 64, 75, 78, 77, 62, 53, 60, 39, 79, 55, 42, 63, 66, 71, 41, 57, 69, 49, 45, 50, 54, 81, 80, 48, 51, 73, 67, 65, 40, 46, 70, 47, 83, 68, 72, 76, 44, 82, 58};
    int b[m] = {35, 41, 39, 40, 33, 37, 36, 32, 34, 38};
    cout << obj.NumberofElementsInIntersection(a, b, n, m);
    return 0;
}