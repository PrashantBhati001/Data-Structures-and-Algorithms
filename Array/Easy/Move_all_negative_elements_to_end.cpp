//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> po;
        vector<int> ne;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                ne.push_back(arr[i]);
            }
            else
            {
                po.push_back(arr[i]);
            }
        }
        
        int i=0,j=0,k=0;
        while(i<po.size())
        {
            arr[k++]=po[i++];
        }
        while(j<ne.size())
        {
            arr[k++]=ne[j++];
        }
        
        
    }
};


//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends