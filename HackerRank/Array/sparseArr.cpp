#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    vector<int> occArr;
    unordered_map<string, int> umap;
    for (int i = 0; i < strings.size(); i++)
    {
        umap[strings[i]] += 1;
    }

    for (int i = 0; i < queries.size(); i++)
    {
        if (umap.find(queries[i]) != umap.end())
        {
            occArr.push_back(umap[queries[i]]);
        }
        else
        {
            occArr.push_back(0);
        }
    }
    return occArr;
}

int main()
{
    vector<string> strings = {"ab", "ab", "abc"};
    vector<string> queries = {"ab", "abc", "bc"};
    matchingStrings(strings, queries);
    return 0;
}