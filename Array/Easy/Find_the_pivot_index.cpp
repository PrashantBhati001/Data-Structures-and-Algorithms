#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }

        int leftsum=0;
        for(int i=0;i<n;i++)
        {
            int rightsum=sum-nums[i]-leftsum;
            if(leftsum==rightsum)
            {
                return i;
            }
            else
            {
                leftsum=leftsum+nums[i];
            }
        }

        return -1;
    }
};