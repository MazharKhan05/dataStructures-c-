#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{
    int no;
    int no_horses = 0;

    std::cin >> no;

    while (no--)
    {

        std::cin >> no_horses;
        vector<int> horses(no_horses);

        for (int i = 0; i < no_horses; i++)
        {
            std::cin >> horses[i];
        }
        sort(horses.begin(), horses.end());
        int result = INT_MAX;
        for (int i = 0; i < horses.size() - 1; i++)
        {
            result = min(result, horses[i + 1] - horses[i]);
        }
        std::cout << result << std::endl;
    }
    return 0;
}