//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        
        int n=arr.size();
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(arr[i]);
            }
            else if(arr[i]>=0)
            {
                if(st.top()>=0)
                {
                    st.push(arr[i]);
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                if(st.top()<0)
                {
                    st.push(arr[i]);
                }
                else
                {
                    st.pop();
                }
            }
        }
        
        vector<int> ans(st.size());
        int k=st.size()-1;
        
        while(!st.empty())
        {
            ans[k]=st.top();
            st.pop();
            k--;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends