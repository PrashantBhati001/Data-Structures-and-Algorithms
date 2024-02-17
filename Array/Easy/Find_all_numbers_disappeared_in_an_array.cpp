#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
      

        for(int i=0;i<nums.size();i++)
        {

            int pos=abs(nums[i])-1;

            if(nums[pos]>0)
            {
                nums[pos]=-nums[pos];
            }
            
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};