#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

string appendStr(string orgStr, string newStr)
{
    orgStr = orgStr + newStr;
    return orgStr;
}
char printChar(string orgStr, int index)
{
    return orgStr[index];
}
string deleteChar(string orgStr, int index)
{
    return orgStr.erase(orgStr.length() - index);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int opts;
    int opType;
    string newStr;
    string orgStr ="";
    
    long int k;
    stack<string> st;
    cin >> opts;
    
    for (long int i = 0; i < opts; i++)
    {
        cin >> opType;
        
        if (opType == 1)
        {
            //Append opt
            cin >> newStr;
            orgStr = appendStr(orgStr, newStr);
            st.push(orgStr);
        }
        else if (opType == 2)
        {
            //delete opt
            cin >> k;
            orgStr = deleteChar(orgStr, k);
            st.push(orgStr);
            
        }
        else if (opType == 3)
        {
            //print opt
            cin >> k;
            cout << printChar(orgStr, k - 1) << endl;
        }
        else
        {   //undo opt
                
                st.pop();
                if(!st.empty()){
                    string stTop =  st.top();
                    orgStr = stTop; 
                }else{
                    orgStr = "";
                }
                
        }
    }

    return 0;
}
