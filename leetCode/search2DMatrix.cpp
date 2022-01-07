#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int binarySearch(vector<int> nums, int len, int target)
    // {
    //     int low = 0, high = len - 1;
    //     while (low <= high)
    //     {
    //         int mid = (low + high) / 2;
    //         if (nums[mid] == target)
    //         {
    //             // cout << "Mid is " << nums[mid];
    //             return mid;
    //         }
    //         else if (nums[mid] > target)
    //         {
    //             high = mid - 1;
    //         }
    //         else
    //         {
    //             low = mid + 1;
    //         }
    //     }
    //     return -1;
    // }
    int matSearch(vector<vector<int>> &mat, int target)
    {
        // int flag = 1;
        // Aproach 1: apply Bin Search on each row
        // for (int i = 0; i < mat.size(); i++)
        // {                                        //T.C: O(N * log(M))
        //     if (binarySearch(mat[i], mat[0].size(), target) != -1)
        //     {
        //         flag = 1;
        //         break;
        //     }
        //     else
        //     {
        //         flag = 0;
        //     }
        // }
        // if (flag)
        //     return 1;

        // return 0;

        // Approach 2: use Prop of row and col both sorted in asc order
        //     int low = 0, high = mat[0].size() - 1;
        //     while (low < mat.size() && high >= 0)
        //     {                                        //T.C: O(M+N)
        //         if (mat[low][high] == target)
        //         {
        //             return 1;
        //         }
        //         else if (mat[low][high] < target)
        //         {
        //             low++;
        //         }
        //         else
        //         {
        //             high--;
        //         }
        //     }
        //     return 0;

        // Approach 3: use prop 2 i.e The first integer of each row is greater than the last integer of the previous row(whole 2-D array can be treated as single sorted arr)
        int n = mat.size(), m = mat[0].size();
        int low = 0, high = (n * m) - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2; // In order to get the row and col corres to imaginary index just divide for row and for col use modulo
            if (mat[mid / m][mid % m] == target)
            {
                return 1;
            }
            else if ((mat[mid / m][mid % m]) > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return 0;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 90;
    cout << obj.matSearch(matrix, target);
    return 0;
}