#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int ans=INT_MAX;
        int sum=0;
        int start=-1;
        int end=-1;
        int n=nums.size();
        bool flag=false;

        while(true)
        {
            bool f1=false;
            bool f2=false;
            while(end<n-1)
            {
                f1=true;
                end++;
                sum=sum+nums[end];

                if(sum<target)
                {
                    continue;
                }
                else
                {
                    int len=end-start;
                    if(len<ans)
                    {
                        ans=len;
                        
                    }

                    break;

                }
            }

            while(start<end)
            {

                f2=true;
                start++;
                sum=sum-nums[start];

                if(sum>=target)
                {
                    int len=end-start;
                    if(len<ans)
                    {
                        ans=len;
                        
                    }

                    continue;
                }
                else
                {
                    break;
                }
            }

            if(f1==false && f2==false)
            {
                break;
            }
        }

        if(ans==INT_MAX)
        {
            return 0;
        }

        return ans;
    }
};