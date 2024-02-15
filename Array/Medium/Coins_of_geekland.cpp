//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        // Your code goes here
        
        int temp[N+1][N+1];
        
        for(int i=0;i<=N;i++)
        {
            temp[0][i]=0;
            temp[i][0]=0;
        }
        
        int mx=INT_MIN;
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            
            {
                temp[i][j]=mat[i-1][j-1]+temp[i-1][j]+temp[i][j-1]-temp[i-1][j-1];
                
                if(i>=K && j>=K)
                    mx=max(mx,temp[i][j]-temp[i-K][j]-temp[i][j-K]+temp[i-K][j-K]);
                
            }
        }
        
        
        return mx;
    }  
};


//{ Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}

// } Driver Code Ends