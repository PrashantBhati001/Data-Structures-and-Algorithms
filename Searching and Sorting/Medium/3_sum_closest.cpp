#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX;
        int resulttarget;

        for(int i=0;i<nums.size();i++)
        {
            int start=i+1;
            int end=nums.size()-1;

            while(start<end)
            {
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==target)
                {
                    return target;
                }
                else if(sum>target)
                {
                    end--;
                }
                else
                {
                    start++;
                }

                int diff=abs(target-sum);
                if(diff<mindiff)
                {
                    mindiff=diff;
                    resulttarget=sum;
                }

            }
        }


        return resulttarget;
        
    }
};