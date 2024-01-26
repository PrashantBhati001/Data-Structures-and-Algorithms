//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

      int firstoccurence(vector<int>& nums,int length,int target)
     {
         int s=0;
         int e=length-1;
         int ans=-1;
         int mid=s+(e-s)/2;
         while(s<=e)
         {
             if(nums[mid]==target)
             {
                 ans=mid;
                 e=mid-1;
             }
             else if(nums[mid]>target)
             {
                 e=mid-1;
                 
             }
             else
                 s=mid+1;
             
             mid=s+(e-s)/2;
             
             
         }
         return ans;
     }
    
    int lastoccurence(vector<int>& nums,int length,int target)
     {
         int s=0;
         int e=length-1;
         int ans=-1;
         int mid=s+(e-s)/2;
         while(s<=e)
         {
             if(nums[mid]==target)
             {
                 ans=mid;
                 s=mid+1;
             }
             else if(nums[mid]>target)
             {
                 e=mid-1;
                 
             }
             else
                 s=mid+1;
             
             mid=s+(e-s)/2;
             
             
         }
         return ans;
     }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here

     int l=arr.size();
     int first=firstoccurence(arr,l,x);
     int last=lastoccurence(arr,l,x);
     vector<int> v;
     v.push_back(first);
     v.push_back(last);
     return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends