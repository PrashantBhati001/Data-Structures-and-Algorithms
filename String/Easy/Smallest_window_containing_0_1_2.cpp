//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        
        int n=S.size();
        vector<int> v(3,0);
        
        for(int i=0;i<S.size();i++)
        {
            int pos=S[i]-'0';
            v[pos]++;
            
        }
        
        for(int i=0;i<3;i++)
        {
            if(v[i]==0)
            {
                return -1;
            }
        }
        
        for(int i=0;i<3;i++)
        {
            v[i]=0;
        }
        
        
        int diff=3;
        int start=0;
        int end=0;
        int len=S.size();
        
        while(end<n)
        {
            while(diff and end<n)
            {
                int pos=S[end]-'0';
                if(v[pos]==0)
                {
                    diff--;
                }
                v[pos]++;
                end++;
            }
            len=min(len,end-start);
            
            while(diff!=1)
            {
                len=min(len,end-start);
                int pos=S[start]-'0';
                v[pos]--;
                if(v[pos]==0)
                {
                    diff++;
                }
                
                start++;
            }
        }
        
        return len;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends