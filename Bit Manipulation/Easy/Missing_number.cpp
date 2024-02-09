#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //Approach-1 //O(N^2) approach

        //For each element 0 to N search in the array

        //Approach -2 O(NlogN) Appraoch 

        //Sort the array and then apply the binary search  in the above approach-1

        //Apprach-2  O(N)-Bit manipulation
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            res=res^nums[i];
        }

        for(int i=0;i<=n;i++)
        {
            res=res^i;
        }

        return res;

    }
};