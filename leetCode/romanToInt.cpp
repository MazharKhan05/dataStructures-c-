#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> umap;
        int reqNum = 0;
        // char spChar=' ';
        vector<bool> vis(s.size());
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        //         for(int i=0; i<s.size()-1;i++){ //Self Approach
        //             spChar =s[i];
        //             if(spChar == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')){
        //                 vis[i] = true, vis[i+1]=true;
        //                 reqNum += (umap[s[i+1]] - umap[spChar]);
        //             }else if(spChar == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')){
        //                 vis[i] = true, vis[i+1]=true;
        //                 reqNum += (umap[s[i+1]] - umap[spChar]);
        //             }else if(spChar == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')){
        //                 vis[i] = true, vis[i+1]=true;
        //                 reqNum += (umap[s[i+1]] - umap[spChar]);
        //             }
        //             spChar=' ';
        //         }

        //         for(int i=0; i<s.size();i++){
        //             if(!vis[i]){
        //                 reqNum +=umap[s[i]];
        //             }
        //         }
        for (int i = 0; i < s.size(); i++)
        {
            if (umap[s[i]] < umap[s[i + 1]])
            {
                reqNum -= umap[s[i]];
            }
            else
            {
                reqNum += umap[s[i]];
            }
        }
        return reqNum;
    }
};
int main()
{
    string s = "LVIII";
    Solution obj;
    obj.romanToInt(s);
    return 0;
}