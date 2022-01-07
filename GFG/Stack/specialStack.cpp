#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <stack>

stack<int> s;

void push(stack<int> &s, int a)
{
    s.push(a);
}

bool isFull(stack<int> &s, int n)
{
    if (s.size() != n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isEmpty(stack<int> &s)
{
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int pop(stack<int> &s)
{
    int top = s.top();
    s.pop();
    return top;
}

int getMin(stack<int> &s)
{
    if (s.empty())
    {
        return -1;
    }
    else
    {
        long int MIN = 2147483627;

        while (!s.empty())
        {
            if (MIN > s.top())
            {
                MIN = s.top();
            }
            s.pop();
        }
        return MIN;
    }
}

int main()
{
    int a;
    int n = 5;
    while (!isEmpty(s))
    {
        pop(s);
    }
    while (!isFull(s, n))
    {
        cin >> a;
        push(s, a);
    }
    cout << getMin(s) << endl;
}