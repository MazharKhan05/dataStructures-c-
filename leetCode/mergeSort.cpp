#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int leftS = m - l + 1;
        int rightS = r - m;
        int j = 0, k = 0;
        vector<int> left(leftS);
        vector<int> right(rightS);
        left.resize(leftS + 1);
        right.resize(rightS + 1);
        left[left.size() - 1] = INT_MAX;
        right[right.size() - 1] = INT_MAX;
        for (int i = l; i < m + 1; i++)
        {
            left[k] = arr[i];
            k++;
        }
        k = 0;
        for (int i = m + 1; i < r + 1; i++)
        {
            right[j] = arr[i];
            j++;
        }
        j = 0;
        for (int i = l; i < r + 1; i++)
        {
            if (left[j] <= right[k])
            {
                arr[i] = left[j];
                // cout << arr[i] << "rightside" << endl;
                j++;
            }
            else
            {
                arr[i] = right[k];
                // cout << arr[i] << "leftside" << endl;
                k++;
            }
        }
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = (l + r) / 2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr, l, mid, r);
        }
    }
};

int main()
{
    Solution obj;
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int l = 0, r = 9;
    obj.mergeSort(arr, l, r);
    for (int i = 0; i < r + 1; i++)
        cout << arr[i] << " ";
    return 0;
}
