#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int size = matrix.size();
        int resVec[size][size];
        int k = 0;

        // for (int i = 0; i < matrix.size(); i++)
        // {
        //     for (int j = 0; j < matrix.size(); j++)
        //     {

        //         if (i == 0)
        //         {
        //             k = size - 1;
        //             resVec[j][k] = matrix[i][j];
        //         }
        //         else if ((i > 0) && (i % 2 == 0))
        //         {
        //             k = (size - 1) - i;
        //             resVec[j][k] = matrix[i][j];
        //         }
        //         else if ((i > 0) && (i % 2 != 0))
        //         {
        //             k = (size - 1) - i;
        //             resVec[j][k] = matrix[i][j];
        //         }
        //     }
        // }

        // Optimized approch (matrix Transpose and reverse)
        int size = matrix.size();

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i; j < matrix.size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
                // cout << matrix[i][j] << " " << matrix[j][i] << endl;
            }
        }
        for (int i = 0; i < size; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution obj;
    obj.rotate(matrix);
    return 0;
}