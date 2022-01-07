#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int prece(char o)
    {
        if (o == '^')
        {
            return 3;
        }
        else if ((o == '*') || (o == '/'))
        {
            return 2;
        }
        else if ((o == '+') || (o == '-'))
        {
            return 1;
        }
        else
            return -1;
    }

    //Function to convert an infix expression to a postfix expression.
    void infixToPostfix(string s)
    {
        string postExp;
        stack<char> st; //stack ( + +
        for (int i = 0; i < s.length(); i++)
        {

            if ((s[i] != '*') && (s[i] != '+') && (s[i] != '-') && (s[i] != '/') && (s[i] != '(') && (s[i] != ')') && (s[i] != '^'))
            {
                postExp.push_back(s[i]);
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {

                while ((!st.empty()) && (st.top() != '('))
                {
                    char opt = st.top();
                    // cout << "For ) stack top " << opt << " ";
                    postExp.push_back(opt);
                    st.pop();
                }
                //pop the last '('
                st.pop();
            }
            else
            {

                if (st.empty())
                {
                    st.push(s[i]);
                    cout << "Stack top at fisrt " << st.top() << endl;
                }
                else
                {
                    if (prece(s[i]) > prece(st.top()))
                    {
                        st.push(s[i]);

                        cout << "Stack top after checking precedence " << st.top() << endl;
                    }

                    else if (prece(s[i] <= prece(st.top())))
                    {
                        while ((!st.empty()) && (prece(s[i]) <= prece(st.top())))
                        {
                            cout << "Opt prece higher than current opt " << s[i] << " " << st.top() << endl;
                            char topHigher = st.top();
                            postExp.push_back(topHigher);
                            st.pop();
                        }

                        st.push(s[i]);
                    }
                }
            }
        }
        while (!st.empty())
        {
            postExp.push_back(st.top());
            st.pop();
        }
        // for (char i : postExp)
        // {
        //     cout << i << " ";
        // }
    }
};

int main()
{
    Solution s;

    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    s.infixToPostfix(exp);
    return 0;
}