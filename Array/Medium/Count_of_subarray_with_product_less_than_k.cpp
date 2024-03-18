//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        
        long long count=0;
        long long product=1;
        int start=0;
        int end=0;
        
        while(end<n)
        {
            product=product*a[end];
            
            while(product>=k && start<=end)
            {
                product=product/a[start];
                start++;
            }
            
            count+=end-start+1;
            end++;
            
            
        }
        
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends