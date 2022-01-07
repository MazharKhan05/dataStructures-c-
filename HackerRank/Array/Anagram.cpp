#include <bits/stdc++.h>
using namespace std;
int anagram(string s)
{
    int freqHash[26] = {0};
    int halfStr = (s.length() - 1) / 2;
    int noLettChange = 0;
    bool notAna = false;

    if (s.length() % 2 != 0)
    {
        return -1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (i <= halfStr)
        {
            int currChar = (s[i] - 'a');
            freqHash[currChar] += 1;
        }
        else if (i > halfStr)
        {
            int currChar = (s[i] - 'a');
            freqHash[currChar] -= 1;
        }
    }
    // for (int i=0; i<; inc-expression) {
    // statements
    // }
    for (int i = 0; i < 26; i++)
    {
        if (freqHash[i] > 0)
        {
            notAna = true;
            noLettChange += abs(freqHash[i]);
        }
    }
    if (notAna)
    {
        return noLettChange;
    }
    return 0;
}
int main()
{
    string str = "abbc";
    cout << anagram(str);
    return 0;
}