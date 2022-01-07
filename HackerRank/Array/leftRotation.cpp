#include <bits/stdc++.h>
using namespace std;

vector<int> rotLeft(vector<int> a, int d)
{
    // vector <int> temp(d); //First approach using extra vector
    // for(int i=0; i<d; i++){
    //     temp[i] = a[i];
    // }

    // for(int i=0; i<a.size()-d;i++){
    //     a[i] = a[d+i];
    // }
    // for(int i=0; i<temp.size();i++){
    //     a[a.size() - d + i] = temp[i];
    // }

    reverse(a.begin(), a.end()); // second approach by reversing the arr
    auto start = a.begin() + a.size() - d;
    reverse(start, a.end());
    auto end = a.end() - d;
    reverse(a.begin(), end);
    return a;
}

int main()
{

    int d = 2;
    vector<int> a = {1, 2, 3, 4, 5};
    rotLeft(a, d);
    return 0;
}