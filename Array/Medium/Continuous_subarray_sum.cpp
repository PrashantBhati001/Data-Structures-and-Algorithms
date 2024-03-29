#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        int sum=0;

        unordered_map<int,int> m;
        m[0]=-1;

        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int rem=sum%k;
            if(m.find(rem)!=m.end())
            {
                int len=i-m[rem];
                if(len>=2)
                {
                    return true;
                }
            }
            else
            {
                m[rem]=i;
            }
        }

        return false;
         


        
    }
};