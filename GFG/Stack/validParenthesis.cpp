#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <stack>

class Solution
{
public:
    stack<char> st;
    unordered_map<char, char> corresChar;
    bool isValid(string s)
    {

        corresChar[')'] = '(';
        corresChar[']'] = '[';
        corresChar['}'] = '{';

        if (s.length() <= 1)
        {
            return false;
        }
        for (char i : s)
        {
            if ((i == '(') || (i == '[') || (i == '{'))
            {
                st.push(i);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    if ((st.top() != corresChar[i]))
                    {
                        return false;
                    }
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution s;
    string testStr = "[({))]";
    cout << s.isValid(testStr);
}