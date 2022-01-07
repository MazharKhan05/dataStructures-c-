#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int majorityElement(int a[], int size)
{
    // unordered_map<int, int> no_counts; //Approach no 1

    // int max_count = 0;
    // int num;

    // for (int i = 0; i < size; i++)
    // {
    //     int temp = a[i];
    //     no_counts[temp]++;
    // }

    // for (auto i : no_counts)
    // {
    //     if (i.second > max_count)
    //     {
    //         max_count = i.second;
    //         num = i.first;
    //     }
    // }
    // // cout << num << " " << max_count;
    // if (max_count > size / 2)
    // {
    //     return num;
    // }
    // else
    // {
    //     return -1;
    // }
    int ind;
    for (int i = 0; i < size; i++)
    {
        ind = a[i] % size;
        a[ind] += size;
    }
    for (int i = 0; i < size; i++)
    {
        // cout << a[i] << " ";
        if ((a[i] / size) > (size / 2))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    n = 3;
    int a[] = {1, 2, 3};

    cout << majorityElement(a, n);
}