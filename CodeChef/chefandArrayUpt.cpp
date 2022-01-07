#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

int main()
{
    long int no, k;
    long int count = 0;
    //std::cin >> no;
    no = 6;
    vector<long int> arr = {1, 3, 5, 9, 0, 2};
    // std::cin >> k;
    k = 5;
    // for (int i = 0; i < no; i++) {
    //     std::cin >> arr[i];
    // }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < no; i++)
    {
        if (arr[0] != k)
        {
            arr[0]++;
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}