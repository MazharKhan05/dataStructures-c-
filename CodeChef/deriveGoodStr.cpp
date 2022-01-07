#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int goodString(string st)
{
    char prevChar = ' ';
    int currCount = 0;
    const int strLen = st.length();
    int arr[st.length()];
    int moves = 0;

    sort(st.begin(), st.end());

    for (int j = 0; j < st.length(); j++)
    {

        if (prevChar == st[j])
        {
            continue;
        }
        currCount = count(st.begin(), st.end(), st[j]);

        if (currCount >= 1)
        {
            arr[j] = currCount - 1;
        }
        prevChar = st[j];

        moves += arr[j];
    }
    return moves;
}

int main()
{
    int n = 0;
    string st = "";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> st;
        std::cout << goodString(st) << std::endl;
    }
    return 0;
}