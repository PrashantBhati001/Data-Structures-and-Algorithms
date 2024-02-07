//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findprefix(int a[],int leftindex,int rightindex)
    {
        int prefixsum=0;
        int ans=INT_MIN;
        for(int i=leftindex;i<=rightindex;i++)
        {
            prefixsum+=a[i];
            ans=max(ans,prefixsum);
        }
        
        return ans;
        
    }
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
        vector<int> ans;
        
        for(int i=0;i<Q;i++)
        {
            int leftindex=L[i];
            int rightindex=R[i];
            int res=findprefix(a,leftindex,rightindex);
            ans.push_back(res);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n], L[q], R[q];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
        Solution obj;
        vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
        for (auto it : ans) 
            cout << it << " ";
        cout << endl;
    }
}

// } Driver Code Ends