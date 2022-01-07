#include <bits/stdc++.h>
using namespace std;

//Problem can also be solved by implementing three nested for loop, but can be optimised by using Two Pointer Algo

bool find2Numbers(int A[], int n, int X, int i)
{

    int j = n - 1;

    int sum = 0;
    //cout << "K-a is " << X << endl;
    while (i < j)
    {
        sum = A[i] + A[j];

        // cout << "Current itn i and j are " << i << " " << j;
        // cout << " current sum is " << sum << endl;

        if (sum > X)
        {
            j--;
        }
        else if (sum < X)
        {
            i++;
        }
        else
        {
            return true;
        }
    }
    return false;
}

bool find3Numbers(int A[], int n, int X)
{
    sort(A, A + n);
    for (int i = 0; i < n - 2; i++)
    {
        if (find2Numbers(A, n, X - A[i], i + 1))
            return true;
    }
    return false;
}

int main()
{
    int n = 6, x = 20;
    int arr[] = {1, 4, 45, 6, 10, 8};
    find3Numbers(arr, n, x);
    return 0;
}