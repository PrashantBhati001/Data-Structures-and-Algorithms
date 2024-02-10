#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //Approach-1:O(N^2)
        //Check  each value count 
        //Approach-2: O(NlogN)Sort the array and then check for duplicates
        //Approach-3:O(N)-time complexity O(N)-space complexity
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                return true;
            }
            else{
                m[nums[i]]++;
            }
        }

        return false;
        
        }
};