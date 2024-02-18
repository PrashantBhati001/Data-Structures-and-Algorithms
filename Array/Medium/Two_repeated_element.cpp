//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> v;
        int x=0;
        int y=0;
        int rsbm=0;
        int ans=0;
        int cnt1=0;
        int cnt2=0;
        
       
        
        
        
            for(int i=0;i<N+2;i++)
            {
                ans=ans^arr[i];
            }
            
            for(int i=1;i<=N;i++)
            {
                ans=ans^i;
                
            }
            
            rsbm=((ans) & (-ans));
            
            for(int i=0;i<N+2;i++)
            {
                if(arr[i] & rsbm)
                {
                    x=x^arr[i];
                    
                }
                else
                {
                    y=y^arr[i];
                }
            }
            
            for(int i=1;i<=N;i++)
            {
                if(i & rsbm)
                {
                    x=x^i;
                    
                }
                else
                {
                    y=y^i;
                }
            }
            
            for(int i=0;i<N+2;i++)
            {
                if(arr[i]==x)
                {
                    cnt1++;
                    if(cnt1==2)
                    {
                        v.push_back(x);
                        v.push_back(y);
                        return v;
                    }
                }
                
                if(arr[i]==y)
                {
                    cnt2++;
                    if(cnt2==2)
                    {
                        v.push_back(y);
                        v.push_back(x);
                        return v;
                    }
                }
                
            }
        
            
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends