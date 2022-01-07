#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
// Just check all possible combinations of substring with distinct char for each index
{
public:
    int findSubString(string str)
    {
        unordered_map<char, int> umap;
        unordered_set<char> distChar;
        for (int i = 0; i < str.length(); i++)
        {
            distChar.insert(str[i]);
        }
        int i = 0;
        int j = 1;
        int distCount = 0;

        int totDist = distChar.size();
        int ans = INT_MAX;
        umap[str[i]] += 1;
        distCount += 1;
        while ((j <= str.length())) //n-1
        {
            if ((distCount != totDist))
            {

                if ((umap[str[j]] < 1))
                {
                    umap[str[j]] += 1;
                    distCount += 1;
                    cout << " in nonRepest  for " << j << " " << str[j] << endl;
                }
                else
                {
                    umap[str[j]] += 1;
                }
                j++;
            }
            else
            {
                ans = min(ans, j - i);
                int temp = j - i;
                cout << temp << " window with distn chars are <-- " << endl;
                i++;
                if (umap[str[i - 1]] > 1)
                {
                    umap[str[i - 1]] -= 1;
                }
                else
                {
                    distCount -= 1;
                    umap[str[i - 1]] -= 1;
                }
            }
        }

        return ans;
    }
};
int main()
{
    string str = "AAAB";

    Solution obj;
    cout << obj.findSubString(str);
    return 0;
}