#include <bits/stdc++.h>
using namespace std;

class Bank
{
    unordered_map<int, long long> umap;

public:
    Bank(vector<long long> &balance)
    {
        for (int i = 0; i < balance.size(); i++)
        {
            umap[i + 1] = balance[i];
        }
    }

    bool transfer(int account1, int account2, long long money)
    {
        if ((umap.find(account1) != umap.end()) && ((umap.find(account2) != umap.end())))
        {
            if (umap[account1] >= money)
            {
                umap[account1] -= money;
                umap[account2] += money;
                return true;
            }
        }
        return false;
    }

    bool deposit(int account, long long money)
    {
        if (umap.find(account) != umap.end())
        {
            umap[account] += money;
            return true;
        }
        return false;
    }

    bool withdraw(int account, long long money)
    {
        if (umap.find(account) != umap.end())
        {
            if (umap[account] >= money)
            {
                umap[account] -= money;
                return true;
            }
        }
        return false;
    }
};
int main()
{
    vector<long long> balance = {10, 100, 20, 50, 30};
    Bank *obj = new Bank(balance);
    bool param_1 = obj->transfer(2, 3, 30);
    bool param_2 = obj->deposit(1, 50);
    bool param_3 = obj->withdraw(4, 50);
    return 0;
}