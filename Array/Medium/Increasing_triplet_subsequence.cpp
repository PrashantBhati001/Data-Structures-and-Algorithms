
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int n=nums.size();
        int n1=INT_MAX;
        int n2=INT_MAX;

        for(int i=0;i<n;i++)
        {
            int n3=nums[i];
            if(n3<=n1)
            {
                n1=n3;
            }
            else if(n3<=n2)
            {
                n2=n3;
            }
            else
            {
                return true;
            }
        }

        return false;
        
    }
};