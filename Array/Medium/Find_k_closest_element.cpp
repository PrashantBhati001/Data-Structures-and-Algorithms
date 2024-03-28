
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int bs(vector<int> &arr,int x)
    {

        
         int low=0;
         int high=arr.size()-1;
         int mid;

         while(low<=high)
         {
            mid=low+(high-low)/2;
            if(arr[mid]==x)
            {
                return mid;
            }
            else if(arr[mid]>x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
         }

         return low;

    } 
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         
         vector<int> ans;

         int index=bs(arr,x);


         int low=index-1;
         int high=index;

         while(low>=0 && high<arr.size() && k>0)
         {
            if(abs(arr[low]-x)<=abs(arr[high]-x))
            {
                ans.push_back(arr[low]);
                low--;
                k--;
            }
            else
            {
                ans.push_back(arr[high]);
                high++;
                k--;
            }
         }

         while(low>=0 && k>0)
         {
                ans.push_back(arr[low]);
                low--;
                k--;

         }

         while(high<arr.size() && k>0)
         {
                ans.push_back(arr[high]);
                high++;
                k--;
         }

         sort(ans.begin(),ans.end());

         return ans;


        
        
    }
};