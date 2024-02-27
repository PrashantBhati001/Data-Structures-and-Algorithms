#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        

        //Approach -1
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        //Approach-2

        // priority_queue<int,vector<int>,greater<int>> pq;

        // for(int i=0;i<nums.size();i++)
        // {
        //     pq.push(nums[i]);
        //     if(pq.size()>k)
        //     {
        //         pq.pop();
        //     }
        // }

        // return pq.top();

        //Approach-3--using quickselect


    }
};