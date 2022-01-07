#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n)
{
    long long noA = 0;

    if ((s.size() == 1) && (s[0] == 'a'))
    {
        return n;
    }
    else if ((s.size() == 1) && (s[0] != 'a'))
    {
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            noA++;
        }
    }
    if (n % s.size() == 0)
    {
        long long singleOcc = n / s.size();
        return singleOcc * noA;
    }
    else
    {
        long long rem = n % s.size();
        long long singleOcc = n / s.size();
        long long i = 0;
        long long extraA = 0;
        while (i != rem)
        {
            if (s[i] == 'a')
            {
                extraA++;
            }
            i++;
        }
        return (singleOcc * noA) + extraA;
    }
}

int main()
{
    string s = "aba";
    repeatedString(s, 10);
    return 0;
}