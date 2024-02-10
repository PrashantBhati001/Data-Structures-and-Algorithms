#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int start=0;
        int end=n-1;
        int k=0;
        while(k<n && k<=end)
        {
            if(nums[k]==0)
            {
                swap(nums[start],nums[k]);
                start++;
            }
            else if(nums[k]==2)
            {
                swap(nums[end],nums[k]);
                end--;
                continue;
            }
            k++;

        }

    }
};