#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> presum;
    NumArray(vector<int>& nums) {
        presum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int sum=nums[i]+presum[i-1];
            presum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {

        if(left==0)
        {
            return presum[right];
        }

        return presum[right]-presum[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */