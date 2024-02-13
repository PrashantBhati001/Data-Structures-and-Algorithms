//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=arr[i]*arr[i];
	    }
	    
	    sort(arr,arr+n);
	    
	    for(int i=n-1;i>1;i--)
	    {
	        int start=0;
	        int end=i-1;
	        int target=arr[i];
	        
	        while(start<end)
	        {
	            
	            int result=arr[start]+arr[end];
	            if(result==target)
	            {
	                return true;
	            }
	            else if(result>target)
	            {
	                end--;
	            }
	            else
	            {
	                start++;
	            }
	        }
	        
	    }
	    
	    return false;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends