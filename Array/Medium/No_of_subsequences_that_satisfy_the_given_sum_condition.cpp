#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
       
       int n=nums.size();
       int M=1e9+7;
       int ans=0;
       //Precomputing the power of 2
       vector<int> power(n,0);
       power[0]=1;
       for(int i=1;i<n;i++)
        {
            power[i]=(power[i-1]*2)%M;
        }

        //sort the array
        sort(nums.begin(),nums.end());

        int l=0;
        int r=n-1;
        
        while(l<=r)
        {
            if(nums[l]+nums[r]<=target)
            {
                ans=(ans%M+power[r-l])%M;
                l++;
            }
            else
            {
                r--;
            }
        }

        return ans;

    }
};