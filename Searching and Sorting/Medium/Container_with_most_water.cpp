//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    
    int maxarea=0;
    int s=0;
    int e=len-1;
    
    while(s<e)
    {
        int area=min(A[s],A[e])*(e-s);
        maxarea=max(maxarea,area);
        
        if(A[s]>A[e])
        {
            e--;
        }
        else
        {
            s++;
        }
        
    }
    
    return maxarea;
    
}


//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends