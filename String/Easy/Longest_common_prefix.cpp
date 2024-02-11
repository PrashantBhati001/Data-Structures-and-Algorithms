//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        sort(arr,arr+N);
        string str1=arr[0];
        string str2=arr[N-1];
        
        string res="";
        
        int i=0;
        int j=0;
        
        while(i<str1.length() && j<str2.length())
        {
            if(str1[i]==str2[j])
            {
                res=res+str1[i];
                i++;
                j++;
            }
            
            else
            {
                break;
            }
        }
        
        
        if(res.size()==0)
        {
            return "-1";
        }
        
        else
        {
            return res;
        }
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends