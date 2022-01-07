#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        bool temp[matrix.size()][matrix[0].size()];
        for (int i = 0; i < matrix.size(); i++)
        { //Approach 1:Brute Force, Time Complexity(n^3), S.C(n^2)
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] != 0)
                {
                    temp[i][j] = true;
                }
                else
                {
                    temp[i][j] = false;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (!temp[i][j])
                {
                    for (int i = 0; i < matrix.size(); i++)
                    { //set col to 0's
                        matrix[i][j] = 0;
                    }
                    for (int j = 0; j < matrix[0].size(); j++)
                    { //set row to 0's
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        //Approach 2: Using set to store where 0 is present/ to store row and col of 0's we can use arr_row & arr_col arrays as well
        unordered_set<int> zeroRow, zeroCol;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroRow.insert(i);
                    zeroCol.insert(j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (zeroRow.find(i) != zeroRow.end())
                {
                    matrix[i][j] = 0;
                }
                else if (zeroCol.find(j) != zeroCol.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution obj;
    obj.setZeroes(matrix);
    return 0;
}