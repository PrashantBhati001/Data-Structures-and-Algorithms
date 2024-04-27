
#include<bits/stdc++.h>
using namespace std;

long long int maxSumTriplet(int n, vector<int> &nums){

     vector<int> right(n);
     right[n-1]=nums[n-1];
     
     for(int i=n-2;i>=0;i--)
     {
         right[i]=max(right[i+1],nums[i]);
     }

     set<int> st;

     st.insert(nums[0]);


     int ans=0;

     for(int i=1;i<n-1;i++)
     {
         st.insert(nums[i]);
         auto it=st.find(nums[i]);
          if(it!=st.begin() and right[i]!=nums[i])
          {
               ans=max(ans,*--it+nums[i]+right[i]);
          }
         
     }

     return ans;



}