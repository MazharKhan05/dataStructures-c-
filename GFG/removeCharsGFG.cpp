#include <bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2)
{
    vector<char> deleteChar;
    //string2.resize(string1.length(), ' ');
    for (int i = 0; i < string1.length(); i++)
    {

        int pos = string2.find(string1[i]);
        cout << pos << " ";
        if (pos >= 0)
        {
            deleteChar.push_back(string2[pos]);
        }
    }
    for (int i = 0; i < deleteChar.size(); i++)
    {
        cout << deleteChar[i] << " Removed char " << endl;
        // int reqPos = string1.find(deleteChar[i]);
        // cout << "pos " << reqPos << endl;
        // string1.erase(string1.begin() + reqPos);
    }
    for (char i : deleteChar)
    {
        cout << i << " ";
    }
}

int main()
{
    // your code goes here

    removeChars("yzxtbg", "nvpgjgmxb");
    return 0;
}
