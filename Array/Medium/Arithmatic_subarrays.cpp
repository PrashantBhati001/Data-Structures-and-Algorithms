#include<bits/stdc++.h>
using namespace std;

//Approach-1 (using simple sorting and check)
//T.C : O(m*nlogn)
//S.C : O(n) creating arrays
class Solution {
public:
     bool findas(vector<int>& nums,int start,int end,vector<int> &temp)
     {
        for(int i=start;i<=end;i++)
        {
            temp.push_back(nums[i]);
        }

        sort(temp.begin(),temp.end());

        if(temp.size()==1)
        {
            return true;
        }

        int commondiff=temp[1]-temp[0];

        for(int i=2;i<temp.size();i++)
        {
            int diff=temp[i]-temp[i-1];
            if(diff!=commondiff)
            {
                return false;
            }
        }

        return true;


     }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        vector<bool> ans;
        vector<int> temp;
        for(int i=0;i<l.size();i++)
        {
            int start=l[i];
            int end=r[i];
            bool res=findas(nums,start,end,temp);
            ans.push_back(res);
            temp.clear();
        }

        return ans;
        
    }
};

//Approach-2 (Without sorting)
//T.C : O(m*n)
//T.C : O(n) using hash set



// class Solution {
// public:
//      bool findas(vector<int>& nums,int start,int end,vector<int> &temp,unordered_map<int,int> &m)
//      {

//         //unordered_map<int,int> m;
//         int maxele=INT_MIN;
//         int minele=INT_MAX;

//         for(int i=start;i<=end;i++)
//         {
//             temp.push_back(nums[i]);
//             m[nums[i]]++;
//             maxele=max(nums[i],maxele);
//             minele=min(nums[i],minele);
//         }

        

//         if(temp.size()==1)
//         {
//             return true;
//         }

//         if((maxele-minele)%(temp.size()-1)!=0)
//         {
//             return false;
//         }
//         int commondiff=(maxele-minele)/(temp.size()-1);
//         int currele=minele;

        

//         while(currele<maxele)
//         {
//             if(m.find(currele)==m.end())
//             {
//                 return false;
//             }
//             currele+=commondiff;
//         }

//         return true;


//      }
//     vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

//         vector<bool> ans;
//         vector<int> temp;
//         unordered_map<int,int> m;
//         for(int i=0;i<l.size();i++)
//         {
//             int start=l[i];
//             int end=r[i];
//             bool res=findas(nums,start,end,temp,m);
//             ans.push_back(res);
//             temp.clear();
//             m.clear();
//         }

//         return ans;
        
//     }
// };

