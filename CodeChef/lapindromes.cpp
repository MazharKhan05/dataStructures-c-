#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no;
    std::cin >> no;
    string arr[no];

    for (int i = 0; i < no; i++)
    {
        string curr_str;
        std::cin >> curr_str;
        arr[i] = curr_str;
    }

    for (string i : arr)
    {

        int strt = 0;
        int mid = i.length() / 2;
        int end = i.length() - 1;
        string frst_mid;
        string scnd_mid;
        string sortedFrst;
        string sortedScnd;

        if (i.length() % 2 == 0)
        {
            frst_mid = i.substr(strt, mid);
            scnd_mid = i.substr(mid, end);
        }
        else
        {
            frst_mid = i.substr(strt, mid);
            scnd_mid = i.substr(mid + 1, end);
        }
        sort(frst_mid.begin(), frst_mid.end());
        sort(scnd_mid.begin(), scnd_mid.end());

        if (frst_mid == scnd_mid)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    // count freq of char and check if they are same in both half

    return 0;
}