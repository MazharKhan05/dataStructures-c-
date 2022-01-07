#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> series;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> subSeries(i + 1, 0);
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    subSeries[j] = 1;
                }
                else if (j != 0 || j != i)
                {
                    subSeries[j] = series[i - 1][j - 1] + series[i - 1][j];
                }
            }
            series.push_back(subSeries);
        }
        return series;
    }
};

int main()
{
    Solution obj;
    obj.generate(5);
    return 0;
}