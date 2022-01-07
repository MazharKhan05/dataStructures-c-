#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        int i = 0, j = 1;
        vector<int> actVec;
        actVec.push_back(a[i]);

        while ((j < n)) //Here j pointer is used to search for always a new ele and i pointer is used to set new ele in podition i
        {
            if (a[i] == a[j])
            {
                j++;
            }
            else
            {
                i++;
                a[i] = a[j];
            }
        }
        return i + 1;
    }
};
int main()
{

    int n = 7;
    int arr[] = {1, 2, 2, 2, 4, 4, 9};
    Solution obj;

    cout << obj.remove_duplicate(arr, n);
    return 0;
}