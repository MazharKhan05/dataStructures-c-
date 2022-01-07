#include <bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution
{
public:
    int tour(petrolPump p[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int tankP = p[i].petrol - p[i].distance;
            // cout << " calc tankP " << i << " " << tankP << endl;
            if (tankP >= 0)
            {
                int j = i + 1;
                if ((tankP >= 0) && (j == n))
                {
                    j = j % (n);
                }
                while (j < n)
                {
                    if ((tankP >= 0) && (j == i))
                    {
                        return i;
                    }
                    tankP += p[j].petrol - p[j].distance;
                    cout << "Tank Cap " << tankP << endl;
                    if (tankP < 0)
                    {
                        tankP = 0;
                        j = 0;
                        break;
                    }
                    if ((tankP >= 0) && (j == n - 1))
                    {
                        j = j % (n - 1);
                        continue;
                    }
                    j++;
                }
            }
        }
        return -1;
    }
};

int main()
{
    int n = 34;
    petrolPump p[n];
    vector<int> temp = {98, 79, 73, 56, 46, 75, 26, 1, 84, 98, 28, 13, 22, 83, 35, 94, 35, 40, 60, 22, 58, 86, 62, 55, 73, 63, 17, 42, 51, 53, 83, 63, 18, 100, 74, 55, 7, 16, 65, 52, 64, 91, 73, 92, 38, 38, 29, 60, 81, 72,
                        57, 88, 42, 91, 53, 71, 12, 66, 18, 70, 84, 62, 13, 52, 7, 1, 68, 39, 90, 65, 55, 33, 76, 5, 42, 80, 39, 13, 37, 70, 57, 71, 61, 45, 15, 50, 15, 66};
    vector<int> pet;
    vector<int> dis;
    for (int i = 0; i < temp.size(); i += 2)
    {
        pet.push_back(temp[i]);
    }
    for (int i = 1; i < temp.size(); i += 2)
    {

        dis.push_back(temp[i]);
    }

    for (int i = 0; i < n; i++)
    {
        p[i].petrol = pet[i];
        p[i].distance = dis[i];
    }
    Solution obj;
    cout << obj.tour(p, n);
}