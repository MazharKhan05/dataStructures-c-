#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {

        int count = 0;

        while (n != 0)
        { //By using right shift and reducing the no
            if ((n & 1) != 0)
            {
                count++;
            }
            n = n >> 1;
        }
        // for(int i=0; i<32; i++){ //By using left shift
        //     int left = 1<<i;
        //     if((n & left) != 0){
        //         count++;
        //     }
        // }
        return count;
    }
};
int main()
{
    Solution obj;
    int n = 11;
    obj.hammingWeight(n);
    return 0;
}