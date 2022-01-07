#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    vector<bool> isPaired(n, false);
    int cnt = 0;
    sort(ar.begin(), ar.end());
    for (int i = 0; i < n; i++)
    {
        if ((ar[i] == ar[i + 1]) && (!isPaired[i] && !isPaired[i + 1]))
        {
            isPaired[i] = true;
            isPaired[i + 1] = true;
            cnt++;
        }
    }
    return cnt;
}

int main()
{

    vector<int> ar = {1, 2, 1, 2, 1, 3, 2};
    sockMerchant(ar.size(), ar);
    return 0;
}