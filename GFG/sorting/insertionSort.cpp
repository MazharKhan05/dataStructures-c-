#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void insert(int arr[], int i)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            insert(arr, i);
        }
    }
};

int main()
{
    Solution obj;
    int arr[] = {1, 2, 5, 1, 2};
    int n = 5;
    obj.insertionSort(arr, n);
}