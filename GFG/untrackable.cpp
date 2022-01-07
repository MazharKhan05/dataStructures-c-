#include <bits/stdc++.h>
using namespace std;

bool leftSmRightGreat(int arr[], int x, int n)
{
    int i = x - 1, j = x + 1; //check for every index prior to current x is it smaller than it
    while (i >= 0)
    {
        if (arr[i] > arr[x])
        {
            //cout << "Ele ment greater than req " << arr[i] << endl;
            return false;
        }
        i--;
    }
    while (j <= n - 1)
    {
        //cout << arr[j] << "j value is " << j;
        if (arr[j] < arr[x])
        {
            return false;
        }
        j++;
    }
    //cout << "I and J are " << i << " " << j;
    // if (i == -1 && j == n)
    // {
    //     return true;
    // }
    return true;
}

void findElement(int arr[], int n)
{

    for (int i = 1; i < n - 1; i++)
    {
        cout << "Bool value is " << leftSmRightGreat(arr, i, n);
        // if (leftSmRightGreat(arr, i, n))
        // return arr[i];
    }
    //return -1;
}

int main()
{
    int N = 3;
    int a[] = {11, 9, 12};
    findElement(a, N);
    return 0;
}