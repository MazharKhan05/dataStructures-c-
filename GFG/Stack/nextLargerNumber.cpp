#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> nge;
        stack<long long> s;
        s.push(arr[n - 1]);
        nge.push_back(-1);

        for (int i = n - 2; i >= 0; i--)
        {
            while ((!s.empty()) && (s.top() != arr[i]))
            {

                if (s.top() < arr[i])
                {
                    s.pop();
                }
                else
                {
                    // cout << s.top() << "top is ";
                    nge.push_back(s.top());
                    // cout << nge[i] << endl;
                    s.push(arr[i]);
                    // cout << "New top is" << s.top() << endl;
                    break;
                }
            }
            if (s.empty())
            { //here we have searched for all larger elements in stack
                // -but we could'nt found one, hence its next greater ele will be -1
                nge.push_back(-1);
                s.push(arr[i]);
            }

            // cout << "Empty Stat " << s.empty() << " ";
        }
        reverse(nge.begin(), nge.end());
        return nge;
    }
};

int main()
{
    Solution obj;
    long long n = 4;
    vector<long long> arr = {1, 2, 3, 4};
    vector<long long> res = obj.nextLargerElement(arr, n);
}