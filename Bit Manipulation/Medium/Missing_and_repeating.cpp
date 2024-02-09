//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> &arr, int n) {
        //Approach 1:For each value from 1 to N keep checking the array for missing and repeating
        //O(N^2)-time complexity

        //Approach-2:At one place we can store two value that is rohit negi brother approach-O(N)
         
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            arr[i]--;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]/n>1)
            {
                ans.push_back(i+1);
            }
            
        }
        
         for(int i=0;i<n;i++)
        {
            
            if(arr[i]/n==0)
            {
                ans.push_back(i+1);
            }
            
        }
        
        return ans;


        
        //Approach-3:Bit manipulation-O(N)      
        //XOR all elements of arr and nos. {1 to n}
        int xor1=0;int p=0;int q=0;
         for(int i=0;i<n;i++){
             xor1=xor1^arr[i]^(i+1);
         }
         int x=xor1 & (-xor1);
         for(int i=0;i<n;i++){
             if(x&arr[i]){
                 p=p^arr[i];
             }else{
                 q=q^arr[i];
             }
         }
         for(int i=1;i<=n;i++){
             if(x&i){
                 p=p^i;
             }else{
                 q=q^i;
             }
         }
         int cnt=0;
         for(int i=0;i<n;i++){
             if(arr[i]==p){
                 cnt++;
             }
         }
         int *ans=new int[2];
         if(cnt>1) {
             ans[0]=p;
             ans[1]=q;
         }else{
             ans[0]=q;
             ans[1]=p;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends