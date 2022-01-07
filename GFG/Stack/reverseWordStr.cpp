#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    stack<char> st;
    string resStr = "";
    string temp = "";
    string reverseWords(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            //cout << s[i] << endl;
            st.push(s[i]);
        }
        while ((!st.empty()))
        {
            if (st.top() != '.')
            {
                temp = temp + st.top();
                st.pop();
                // cout << temp << "Without" << endl;
            }
            else
            {
                temp = st.top() + temp;
                st.pop();
                resStr = temp + resStr;
                // cout << resStr << endl;
                temp = "";
                // cout << temp << "With . ";
            }
        }
        resStr = temp + resStr;
        return resStr;

        // for (char j : resStr)
        // {
        //     cout << j;
        // }
    }
};

int main()
{
    string s = "pqr.mno";
    Solution ob;
    cout << ob.reverseWords(s);
}