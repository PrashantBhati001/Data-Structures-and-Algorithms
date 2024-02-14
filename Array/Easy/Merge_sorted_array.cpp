#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int end=m+n-1;
        int i=m-1;
        int j=n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i]<nums2[j])
            {
                nums1[end]=nums2[j];
                end--;
                j--;
            }
            else
            {
                nums1[end]=nums1[i];
                end--;
                i--;
            }
        }

        while(i>=0)
        {
            nums1[end]=nums1[i];
            end--;
            i--;
        }

        while(j>=0)
        {
            nums1[end]=nums2[j];
            end--;
            j--;
        }
    }
};