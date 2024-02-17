#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=INT_MAX;

        if(k>=n)
        {
            return nums[n-1]-nums[0];
        }
        for(int i=0;i<=n-k;i++)
        {
            res=min(res,nums[i+k-1]-nums[i]);
        }

        return res;
    }
};