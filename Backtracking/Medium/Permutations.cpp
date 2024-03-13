#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findsol(vector<int>& nums,vector<vector<int>> &ans,vector<int> &temp,   vector<int> &visited)
    {
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return ;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]==0)
            {
                visited[i]=1;
                temp.push_back(nums[i]);
                findsol(nums,ans,temp,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      
     vector<vector<int>> ans;
     vector<int> temp;
     vector<int> visited(nums.size(),0);

     findsol(nums,ans,temp,visited);

     return ans;

        
    }
};
// class Solution {
// public:

     //Approach-1
     


    //Approach -2--This approach does not make use of temp and visited vector.
    // void findsol(vector<int>& nums,int index,vector<vector<int>> &ans)
    // {
        
        // if(index==nums.size())
        // {
        //     ans.push_back(nums);
        // }

        // for(int i=index;i<nums.size();i++)
        // {
        //     swap(nums[index],nums[i]);
        //     findsol(nums,index+1,ans);
        //     swap(nums[index],nums[i]);
            
        // }
    // }
    // vector<vector<int>> permute(vector<int>& nums) {
        
    //     vector<vector<int>> ans;
    //     findsol(nums,0,ans);
    //     return ans;

    // }
// };