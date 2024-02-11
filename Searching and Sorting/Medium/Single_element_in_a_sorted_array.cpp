#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-2;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            if(nums[mid]==nums[mid^1])
            {
                low=mid+1;
            }
            else
                high=mid-1;
            
            mid=low+(high-low)/2;
        }
        return nums[low];
        
    }
};