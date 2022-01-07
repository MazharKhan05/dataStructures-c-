#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0, count = 0;
        while (i < s.size() and j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                count++;
            }

            j++;
        }
        if (count != s.size())
            return false;
        return true;
    }
};

int main()
{
    Solution obj;
    string s = "abc", t = "ahbgdc";
    obj.isSubsequence(s, t);
    return 0;
}