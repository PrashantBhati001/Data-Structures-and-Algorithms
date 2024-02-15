//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
    int romantoint(char c)
    {
        if(c=='I')
        {
            return 1;
        }
        else if(c=='V')
        {
            return 5;
        }
        else if(c=='X')
        {
            return 10;
        }
        else if(c=='L')
        {
            return 50;
        }
        else if(c=='D')
        {
            return 500;
        }
         else if(c=='C')
        {
            return 100;
        }
        
        else
        {
            return 1000;
        }
    }
    int romanToDecimal(string &str) {
        
        
        int ans=0;
        
        int n=str.size();
        int first=romantoint(str[0]);
        
        if(n==1)
        {
            return first;
        }
        
        for(int i=1;i<n;i++)
        {
            int second=romantoint(str[i]);
            if(first==second)
            {
                ans=ans+first;
            }
            else if(first>second)
            {
                ans=ans+first;
            }
            else
            {
                ans=ans-first;
            }
            
            first=second;
        }
        
        ans=ans+first;
        return  ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends