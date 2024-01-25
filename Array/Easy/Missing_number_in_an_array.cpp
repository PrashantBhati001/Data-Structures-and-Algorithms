//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
     
        int res=0;
        for(int i=1;i<=n;i++)
        {
            res=res^i;
        }
        
        for(int j=0;j<n-1;j++)
        {
            res=res^array[j];
        }
        
        return res;

        //The second approach is to find the sum of all the numbers from 1 to N and subtract the sum of the array elements.
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends

