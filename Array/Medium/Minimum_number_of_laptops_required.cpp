//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        

        //Approach-1
        // sort(start,start+N);
        // sort(end,end+N);
        
        // int i=0;
        // int j=0;
        // int ans=0;
        // int laptop=0;
        
        // while(i<N && j<N)
        // {
        //     if(start[i]<end[j])
        //     {
        //         laptop++;
        //         ans=max(ans,laptop);
        //         i++;
        //     }
        //     else
        //     {
        //         laptop--;
        //         j++;
        //     }
        // }
        
        // return ans;

        //Approach-2

         
        map<int,int> m;
        
        for(int i=0;i<N;i++)
        {
            m[start[i]]++;
            m[end[i]]--;
        }
        
        int laptop=0;
        int ans=0;
        
        for(auto i:m)
        {
            laptop=laptop+i.second;
            ans=max(ans,laptop);
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
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends