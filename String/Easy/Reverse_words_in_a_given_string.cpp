//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
        reverse(S.begin(),S.end());
        int i=0;
        int index=0;
        int n=S.size();
        
        while(i<n)
        {
            if(S[i]=='.')
            {
                reverse(S.begin()+index,S.begin()+i);
                index=i+1;
            }
            i++;
        }
        
        reverse(S.begin()+index,S.end());
        
        return S;
        
        
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends