#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int j = n - 1, i = m - 1;
        int k = m + n - 1;
        //         int max1 = m+1;
        //         int max2 = n+1;
        //         vector<int> arr(m);
        //         for(int i=0;i<m;i++){
        //             arr[i] = nums1[i];
        //         }
        //         arr.resize(max1);
        //         nums2.resize(max2);
        //         arr[max1-1] = INT_MAX;
        //         nums2[max2-1] = INT_MAX;

        //         for(int k=0; k<nums1.size();k++){ T.C-> O(m+n), S.C->O(m)
        //             if(arr[i] <= nums2[j]){
        //                 nums1[k] = arr[i];
        //                 i++;
        //             }else{
        //                 nums1[k] = nums2[j];
        //                 j++;
        //             }
        //         }
        while (i >= 0 and j >= 0)
        {
            if (nums1[i] >= nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            k--, j--;
        }
    }
};
int main()
{
    Solution obj;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    obj.merge(nums1, m, nums2, n);
    return 0;
}