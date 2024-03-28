#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int  sum=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }

        if(sum<x)
        {
            return -1;
        }
        if(sum==x)
        {
            return n;
        }

        int  target=sum-x;

        unordered_map<int,int> m;

        m[0]=-1;
        sum=0;
        for(int i=0;i<n;i++)
        {
             sum=sum+nums[i];
             int ttarget=sum-target;
             if(m.find(ttarget)==m.end())
             {
                m[sum]=i;
             }
             else
             {
                int len=i-m[ttarget];
                ans=max(ans,len);
                m[sum]=i;

             }
        }
         

        if(ans==INT_MIN)
        {
            return -1;
        }

        return n-ans;


        
    }
};