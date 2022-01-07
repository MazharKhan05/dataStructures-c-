#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S)
{
    unordered_map<char, int> countChars;
    for (char i : S)
    {
        countChars[i]++;
    }

    for (char s : S)
    {
        if (countChars[s] == 1)
        {
            return s;
        }
    }
    return '$';
}

int main()
{
    string s = "abbc";
    cout << nonrepeatingCharacter(s);
    return 0;
}