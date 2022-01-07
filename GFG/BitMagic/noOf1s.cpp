#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int setBits(int N)
    {
        int noCount = 0;
        int count = 0;
        int rem = 0;
        while (N != 0)
        { //Time Complexity O(log(n))
            rem = N % 2;
            N = N / 2;
            if (rem == 1)
            {
                noCount++;
            }
            cout << " Num is " << N << endl;
            count++;
        }
        cout << "Count is " << count;
        return noCount;
    }
};

int main()
{

    int N = 10000;
    Solution obj;
    obj.setBits(N);

    return 0;
}