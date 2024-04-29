//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        
       vector<int> ans(N,-1);
       stack<int>  st;
       
       for(int i=0;i<N;i++)
       {
           while(!st.empty() && arr[i]>arr[st.top()])
           {
               ans[st.top()]=arr[i];
               st.pop();
           }
           
           st.push(i);
       }
       
        for(int i=0;i<N;i++)
       {
           while(!st.empty() && arr[i]>arr[st.top()])
           {
               ans[st.top()]=arr[i];
               st.pop();
           }
           
           st.push(i);
       }
       
        return ans;
    
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends




    //    int n=nums.size();
    //     vector<int> ans(n,-1);
    //     stack<int> st;

    //     for(int i=0;i<2*n;i++)
    //     {
    //         while(!st.empty() and nums[i%n]>nums[st.top()%n])
    //         {
    //             ans[st.top()%n]=nums[i%n];
    //             st.pop();
    //         }

    //         st.push(i);
    //     }

    //     return ans;

