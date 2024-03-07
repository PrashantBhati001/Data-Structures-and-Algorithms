//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
     
     int ans=-1;
     int i=-1;
     int j=-1;
     int n=s.size();
     unordered_map<char ,int> m;
     
     while(1)
     {
         int f1=0;
         int f2=0;
         
             while(i<n-1)
             {
                 
                 f1=1;
                 
                 i++;
                 m[s[i]]++;
                 
                 if(m.size()<k)
                 {
                     continue;
                 }
                 else if(m.size()==k)
                 {
                     int len=i-j;
                     ans=max(ans,len);
                     
                 }
                 else{
                     break;
                 }
                 
             }
             
              while(j<i)
             {
                 f2=1;
                 j++;
                 
                 if(m[s[j]]==1)
                 {
                     m.erase(s[j]);
                 }
                 else
                 {
                     m[s[j]]--;
                 }
                 
                 if(m.size()>k)
                 {
                     continue;
                 }
                 else if(m.size()==k)
                 {
                    int len=i-j;
                    ans=max(ans,len);
                    break;
                 }
                 
             }
             
             if(f1==0 && f2==0)
             {
                 break;
             }
         
     }
     
        return ans;
     
     
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends