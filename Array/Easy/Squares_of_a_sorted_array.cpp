#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        //Approach-1 O(NlogN)-time complexity

        //Approach-2 O(N)-time complexity
        
        int n=nums.size();
        vector<int> ans(n,0);
        
        int start=0;
        int end=n-1;
        int k=n-1;

        while(start<=end)
        {
            int leftsquare=nums[start]*nums[start];
            int rightsquare=nums[end]*nums[end];

            if(leftsquare>=rightsquare)
            {
                ans[k]=leftsquare;
                k--;
                start++;
            }else
            {
                ans[k]=rightsquare;
                k--;
                end--;
            }
        }

        return ans;
        
    }
};