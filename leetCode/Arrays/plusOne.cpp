#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        { //cases like 123 && 299 are handled here
            if (digits[i] <= 8)
            {
                digits[i] += 1;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        digits.push_back(0); //cases like 999 are handled here
        digits[0] = 1;
        return digits;
    }
};

int main()
{
    Solution obj;
    vector<int> digits = {1, 2, 3};
    obj.plusOne(digits);
    return 0;
}