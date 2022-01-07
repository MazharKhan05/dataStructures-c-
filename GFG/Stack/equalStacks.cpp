#include <bits/stdc++.h>
#include <vector>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    sum1 = accumulate(h1.begin(), h1.end(), 0);
    sum2 = accumulate(h2.begin(), h2.end(), 0);
    sum3 = accumulate(h3.begin(), h3.end(), 0);
    // cout << sum1 << sum2 << sum3 << " ";
    while (1)
    {
        if (sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            return 0;
        }
        if ((sum1 == sum2) && (sum2 == sum3))
        {
            return sum1;
            // break;
        }
        // cout << "Values of  j,k & l" << j << " " << k << " " << l << endl;
        if ((sum1 >= sum2) && (sum1 >= sum3))
        {
            sum1 = sum1 - h1[l];
            // cout << "Sum1 is " << sum1 << " ";
            l++;
        }

        else if ((sum2 >= sum1) && (sum2 >= sum3))
        {
            sum2 = sum2 - h2[j];
            // cout << "Sum2 is " << sum2 << " ";

            j++;
        }
        else if ((sum3 >= sum1) && (sum3 >= sum2))
        {
            sum3 = sum3 - h3[k];
            // cout << "Sum3 is " << sum3 << " ";

            k++;
        }
        // cout << sum1 << "All sums " << sum2 << " " << sum3 << endl;
    }
}

int main()
{
    vector<int> h1 = {3, 2, 1, 1, 1}; //5
    vector<int> h2 = {4, 3, 2};       //4
    vector<int> h3 = {1, 1, 4, 1};    //2
    equalStacks(h1, h2, h3);
    return 0;
}