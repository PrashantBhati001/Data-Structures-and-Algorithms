//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool ans(vector<int> &arr,int index,int n,int target)
    {
        if (target==0)
        {
            return 1;
        }
        if(target<0 || index==n)
        {
            return 0;
        }
        
        return ans(arr,index+1,n,target) || ans(arr,index+1,n,target-arr[index]);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        
        return ans(arr,0,arr.size(),sum);
    }

    //The above solution is giving TLE as it is taking O(2^n) time ,we can reduce this time to O(n) using DP.
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends