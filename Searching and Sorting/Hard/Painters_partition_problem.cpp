//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
         long long int start=0;
         long long int end=0;
         long long int ans=0;
         long long int sum=0;
         long long int max_item=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(arr[i]>max_item)
            {
                max_item=arr[i];
            }
        }
        
        start=max_item;
        end=sum;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            int count=1;
            long long int pages=0;
            for(int i=0;i<n;i++)
            {
                pages=pages+arr[i];
                if(pages>mid)
                {
                    count++;
                    pages=arr[i];                
                    
                }
            }
            
            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends