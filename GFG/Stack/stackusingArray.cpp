#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <stack>

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack()
    {
        top = -1;
    }
    int pop();
    void push(int x);
};

void MyStack ::push(int x)
{
    if (top >= 1000)
    {
        cout << "Stack OverFlow " << endl;
    }
    else
    {
        arr[++(top)] = x;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top < 0)
    {
        return -1;
    }
    else
    {
        return arr[(top)--];
    }
}

int main()
{
    MyStack s;
    // MyStack *s = new MyStack;
    int noQuery;
    cin >> noQuery;
    while (noQuery--)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int a;
            cin >> a;
            s.push(a);
        }
        else if (query == 2)
        {
            cout << s.pop() << " ";
        }
    }
}