#include <bits/stdc++.h>
using namespace std;
#include <stack>
#include <vector>

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> waitDays(temperatures.size());
        int n = temperatures.size();
        stack<pair<int, int>> maxTemp;
        maxTemp.push({temperatures[n - 1], n - 1});

        waitDays[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {

            while (!maxTemp.empty())
            {

                if (temperatures[i] >= maxTemp.top().first)
                {
                    // cout << "For ith max ele " << i << ' ' << temperatures[i] << endl;
                    maxTemp.pop();

                    if (maxTemp.empty())
                    {
                        maxTemp.push({temperatures[i], i});

                        waitDays[i] = 0;
                        // cout << "For ith ele " << i << ' ' << temperatures[i] << endl;
                        break;
                    }
                }
                else
                {

                    // cout << "For ith min ele " << i << ' ' << temperatures[i] << endl;

                    waitDays[i] = maxTemp.top().second - i;
                    maxTemp.push({temperatures[i], i});
                    // cout << maxTemp.top().first << " " << i << "Value of top's index and currIndex" << endl;
                    break;
                }
            }
        }

        return waitDays;
    }
};

int main()
{
    Solution s;

    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> days = s.dailyTemperatures(temperatures);

    for (int i : days)
    {
        cout << i << " ";
    }
}