#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumSwap(int num)
    {
        string reqNum = to_string(num);
        vector<int> maxInd(reqNum.size());
        vector<char> maxVal(reqNum.size());
        int size = reqNum.size() - 1;
        maxInd[size] = reqNum.size() - 1;
        maxVal[size] = reqNum[size];

        for (int i = reqNum.size() - 2; i >= 0; i--) // Optimised soln T.C-> O(nums.size()) ~ O(n)
        {
            if (reqNum[i] > maxVal[i + 1])
            {
                maxVal[i] = reqNum[i];
                maxInd[i] = i;
            }
            else if (reqNum[i] == maxVal[i + 1])
            {
                maxVal[i] = reqNum[i];
                maxInd[i] = maxInd[i + 1];
            }
            else
            {
                maxVal[i] = maxVal[i + 1];
                maxInd[i] = maxInd[i + 1];
            }
        }

        for (int i = 0; i < reqNum.size(); i++)
        {
            if (reqNum[i] < maxVal[i])
            {
                swap(reqNum[i], reqNum[maxInd[i]]);
                break;
            }
        }

        int Num = stoi(reqNum);
        return Num;
    }
};

int main()
{
    int num = 2736;
    Solution obj;
    cout << obj.maximumSwap(num);
    return 0;
}