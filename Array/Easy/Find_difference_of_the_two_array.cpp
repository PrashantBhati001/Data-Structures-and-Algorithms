#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans;
        vector<int> v1;
        vector<int> v2;
        int n1=nums1.size();
        int n2=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                v1.push_back(nums1[i]);
                while(i+1<n1 && nums1[i]==nums1[i+1])
                {
                    i++;
                }
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                v2.push_back(nums2[j]);
                while(j+1<n2 && nums2[j]==nums2[j+1])
                {
                    j++;
                }
                j++;
            }
            else
            {
                while(i+1<n1 && nums1[i]==nums1[i+1])
                {
                    i++;
                }
                i++;

                while(j+1<n2 && nums2[j]==nums2[j+1])
                {
                    j++;
                }
                j++;
            }
        }

        while(i<n1)
        {
            v1.push_back(nums1[i]);
            while(i+1<n1 && nums1[i]==nums1[i+1])
            {
                i++;
            }
            i++;
             
        }

        while(j<n2)
        {
            v2.push_back(nums2[j]);
            while(j+1<n2 && nums2[j]==nums2[j+1])
            {
                j++;
            }
            j++;

        }

        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
    }
};