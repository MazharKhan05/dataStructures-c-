#include <bits/stdc++.h>
using namespace std;
#define MAX 100

class Stack
{
public:
    int top;
    int arr[MAX];
    bool insert(int x);
    int remove();
    bool isEmpty();
    int peek();

    Stack()
    {
        top = -1;
    }
};
bool Stack::insert(int x)
{
    if (top >= MAX - 1)
    {
        cout << "Stack overFlow" << endl;
        return false;
    }
    else
    {
        arr[++top] = x;
        return true;
    }
}

int Stack::remove()
{
    if (top < 0)
    {
        cout << "Stack UnderFlow " << endl;
        return 0;
    }
    else
    {
        return arr[top--];
    }
}

bool Stack::isEmpty()
{
    if (top >= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack underFlow " << endl;
        return 0;
    }
    else
    {
        return arr[top];
    }
}

int main()
{
    Stack s;
    for (int i = 10; i <= 100; i += 10)
    {
        s.insert(i);
    }
    // cout << s.peek();
    // cout << "Element deleted is " << s.remove();
    //cout << " " << s.peek();

    while (!s.isEmpty())
    {
        cout << "Current ele is " << s.peek() << endl;
        cout << "deleted ele " << s.remove() << endl;
    }
    return 0;
}