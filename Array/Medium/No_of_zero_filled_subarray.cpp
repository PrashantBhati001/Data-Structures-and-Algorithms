#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int n=nums.size();

        int start=0;
        int end=0;
        long long  ans=0;

        while(end<n)
        {
            if(nums[end]!=0 && start==end)
            {
                end++;
                start++;
            }
            else if(nums[end]==0)
            {
                end++;
            }
            else
            {
                long long  zerocount=end-start;
                long long  noarray=(zerocount*(zerocount+1)/2);
                ans=ans+noarray;
                end++;
                start=end;
            }
        }

        if(start!=end)
        {
                long long  zerocount=end-start;
                long long  noarray=(zerocount*(zerocount+1)/2);
                ans=ans+noarray;
        }

        return ans;
        
    }
};