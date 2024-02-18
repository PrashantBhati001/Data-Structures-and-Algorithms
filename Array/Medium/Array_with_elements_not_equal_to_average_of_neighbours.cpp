#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //  Approach-1 O(N)--time complexity

        // int n=nums.size();

        //  for(int i=1;i<n-1;i++)
        //  {
        //      int left=nums[i-1];
        //      int medium=nums[i];
        //      int right=nums[i+1];

        //      if((left>medium && medium>right) ||  (left<medium && medium<right))
        //      {
        //          swap(nums[i],nums[i+1]);
        //      }
        //  }

        //  return nums;

        //Approach-2 O(NlogN)+O(N)--time compplexity and O(N) -space complexity.
        int n=nums.size();
        vector<int> ans(n,0);

        sort(nums.begin(),nums.end());

        int index=0;
        for(int i=0;i<n;i=i+2)
        {
            ans[i]=nums[index];
            index++;
        }

        for(int i=1;i<n;i=i+2)
        {
            ans[i]=nums[index];
            index++;
        }

        return ans;
    }
};