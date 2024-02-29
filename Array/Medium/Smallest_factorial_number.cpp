//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
        int countofzero(int target)
        {
            int count=0;
            int i=1;
            while(target/pow(5,i))
            {
                count=count+target/pow(5,i);
                i++;
            }
            
            return count;
        }
        
        int findNum(int n)
        {
            if(n==1)
            {
                return 5;
            }
            
            int low=1;
            int high=5*n;
            int ans=0;
            
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                int count=countofzero(mid);
                if(count<n)
                {
                    low=mid+1;
                }
                else
                {
                    ans=mid;
                    high=mid-1;
                }
            }
            
            return ans;
            
            
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends