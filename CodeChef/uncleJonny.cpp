#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{
    int testNo;
    std::cin >> testNo;
    int jonnyPos;
    int reqSong;

    while (testNo--)
    {
        int arrSize;
        std::cin >> arrSize;
        vector<int> playList(arrSize);
        for (int i = 0; i < playList.size(); i++)
        {
            std::cin >> playList[i];
        }
        std::cin >> jonnyPos;
        reqSong = playList[jonnyPos - 1];
        sort(playList.begin(), playList.end());

        for (int i = 0; i < playList.size(); i++)
        {
            if (playList[i] == reqSong)
            {
                std::cout << i + 1 << std::endl;
            }
        }
    }
    return 0;
}