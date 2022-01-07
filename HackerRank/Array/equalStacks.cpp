#include <bits/stdc++.h>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    int sum1 = 0, sum2 = 0, sum3 = 0, j = 0, k = 0, l = 0;

    sum1 = accumulate(h1.begin(), h1.end(), 0);
    sum2 = accumulate(h2.begin(), h2.end(), 0);
    sum3 = accumulate(h3.begin(), h3.end(), 0);
    int smallest1 = min(sum1, sum2);
    int smallest2 = min(smallest1, sum3);
    int count = 0;
    while (1)
    {
        smallest1 = min(sum1, sum2);
        smallest2 = min(smallest1, sum3);
        count++;
        // cout << count << " ";
        if (sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            return 0;
        }
        if ((sum1 == sum2) && (sum2 == sum3))
        {
            return sum1;
        }
        if (sum1 > smallest2)
        {
            sum1 -= h1[j];
            j++;
        }
        else if (sum2 > smallest2)
        {
            sum2 -= h2[k];
            k++;
        }
        else if (sum3 > smallest2)
        {
            sum3 -= h3[l];
            l++;
        }
    }
}

int main()
{

    // int n1 = 5, n2 = 3, n3 = 4;
    vector<int> h1 = {3, 2, 1, 1, 1};
    vector<int> h2 = {4, 3, 2};
    vector<int> h3 = {1, 1, 4, 1};

    cout << equalStacks(h1, h2, h3);
    return 0;
}