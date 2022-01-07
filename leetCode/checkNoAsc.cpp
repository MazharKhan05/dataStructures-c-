#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        stringstream ss(s);
        int num;
        string temp;
        // bool flag=true;
        vector<int> numTok;
        while (!ss.eof())
        {
            ss >> temp;

            if (stringstream(temp) >> num)
            {
                numTok.push_back(num);
            }
            temp = "";
        }
        for (int i = 0; i < numTok.size(); i++)
        {
            if ((i + 1 < numTok.size()))
            {
                if ((numTok[i] < numTok[i + 1]))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{
    Solution obj;
    string s = "hello world 5 x 5";
    obj.areNumbersAscending(s);
    return 0;
}