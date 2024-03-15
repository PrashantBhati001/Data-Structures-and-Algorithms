//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long findcount(int N,vector<int> &A,long long X)
    {
        long long count=0;
        long long  sum=0;
        int start=0;
        int end=0;
        
        while(end<N)
        {
            sum=sum+A[end];
            
            while(sum>=X)
            {
                sum=sum-A[start];
                start++;
            }
            count+=end-start+1;
            end++;
        }
        
        return count;
        
    }
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        
        long long count1=findcount(N,A,L);
        long long count2=findcount(N,A,R+1);
        
        return count2-count1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends