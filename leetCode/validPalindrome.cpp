#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validPalin(int i, string s)
    {
        int len = s.length();
        if (len % 2 != 0 && i > len / 2)
        {
            return true;
        }
        if (len % 2 == 0 && i >= len / 2)
        {
            return true;
        }
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
        return validPalin(i + 1, s);
    }

    bool isPalindrome(string s)
    {
        string str = "";

        if (s.length() == 1 && s[0] == ' ')
        {
            return true;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                str.push_back(s[i]);
            }
        }
        return validPalin(0, str);

        // int len = str.length();
        // for(int i=0; i<str.length(); i++){ //Iterative Soln T.C->O(n/2)
        //     if(len%2 != 0 && i>len/2){
        //         return true;
        //     }
        //     if(len%2 == 0 && i>= len/2){
        //         return true;
        //     }
        //     if(str[i] != str[len-i-1]){
        //         return false;
        //     }
        // }
        // return true;
    }
};

int main()
{
    Solution obj;
    cout << obj.isPalindrome("");
}