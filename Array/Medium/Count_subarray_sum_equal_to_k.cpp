#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int target=sum-k;
            if(m.find(target)!=m.end())
            {
                count=count+m[target];
            }

            m[sum]++;
        }

        return count;
    }
};