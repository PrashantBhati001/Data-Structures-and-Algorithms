#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index=0;
        int n=nums.size();
        int cnt=1;
        int i=0;
        while(i<n)
        {
            while(i+1<n && nums[i]==nums[i+1])
            {
                i++;
                if(cnt<2)
                {
                    index++;
                    nums[index]=nums[i];
                    cnt++;
                }

            }
            i++;
            if(i<n)
            {
                index++;
                nums[index]=nums[i];
                cnt=1;
            }
            
        }

        return index+1;

    }
};