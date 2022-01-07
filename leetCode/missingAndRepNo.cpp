#include <bits/stdc++.h>
using namespace std;

// pair<int, int> missingAndRepeating(vector<int> &arr, int n)
// {
//     vector<int> freq(arr.size() + 1);
//     pair<int, int> ans;
//     for (int i : arr)
//     {
//         freq[i]++;
//     }
//     for (int i = 1; i < freq.size(); i++)
//     {
//         if (freq[i] == 0)
//         {
//             ans.first = i;
//         }
//         else if (freq[i] > 1)
//         {
//             ans.second = i;
//         }
//     }
//     return ans;
// }

void findTwoElement(vector<int> arr, int n)
{
    int actXOR = 0;
    int XOR = 0;
    int count = 0;
    int ans[2];
    for (int i = 0; i < n; i++)
        XOR ^= arr[i];

    for (int i = 1; i <= n; i++)
        actXOR ^= i;

    int mis = XOR ^ actXOR;
    while (mis != 0)
    {
        if (mis & 1)
        {
            break;
        }
        count++;
        mis = mis >> 1;
    }
    XOR = 0;
    actXOR = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << count))
        {
            XOR ^= arr[i];
        }
        else
        {
            actXOR ^= arr[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & (1 << count))
        {
            XOR ^= i;
        }
        else
        {
            actXOR ^= i;
        }
    }
    cout << XOR << " " << actXOR;
    // return ans;
}
int main()
{
    vector<int> arr = {1, 3, 3};
    int n = 3;
    findTwoElement(arr, n);
    // cout << a.first << " " << a.second << " ";
    return 0;
}