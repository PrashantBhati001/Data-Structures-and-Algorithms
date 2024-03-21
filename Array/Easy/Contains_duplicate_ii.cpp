#include <bits/stdc++.h>
using namespace std;


//Using map approach
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();

        unordered_map<int,int> m;

        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=i;
            }
            else
            {
                int diff=abs(i-m[nums[i]]);
                if(diff<=k)
                {
                    return true;
                }
                else
                {
                    m[nums[i]]=i;
                }
            }
        }

        return false;




    }
};

//Using sliding window technique


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int,int> m;
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            if(abs(j-i)<=k)
            {
                if(m.find(nums[j])==m.end())
                {
                    m[nums[j]]++;
                    j++;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                m.erase(nums[i]);
                i++;
            }
        }

        return false;
        
    }
};


