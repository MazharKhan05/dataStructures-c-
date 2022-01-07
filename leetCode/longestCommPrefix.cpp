#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinLen(vector<string> strs)
    {
        int minSize = 0;
        for (int i = 0; i < strs.size() - 1; i++)
        {
            if (strs[i].size() <= strs[i + 1].size())
            {
                minSize = strs[i].size();
            }
            else
            {
                minSize = strs[i + 1].size();
                // cout << minSize << " ";
            }
        }

        return minSize;
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 1 && strs[0] == "")
            return "";
        else if (strs.size() == 1 and strs[0] != "")
            return strs[0];
        int maxLen = INT_MAX;
        string frstStr = strs[0];
        int minLen = 0;
        if (strs.size() > 1)
        {
            minLen = getMinLen(strs);
        }

        for (int i = 1; i < strs.size(); i++)
        {
            int j = 0, a = 0;
            while (j < minLen)
            {
                if (frstStr[j] == strs[i][j])
                {
                    a++;
                }
                else
                {
                    break;
                }
                j++;
            }
            frstStr = strs[i];
            maxLen = min(maxLen, a);
        }

        return frstStr.substr(0, maxLen);
    }
};

int main()
{
    Solution obj;
    vector<string> str = {"flower", "flow", "flight"};
    cout << obj.longestCommonPrefix(str);
    return 0;
}