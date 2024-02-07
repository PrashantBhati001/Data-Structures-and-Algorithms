//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        
        vector<int> ans;
        int row=mat.size();
        int col=mat[0].size();
        if(row==0 || col==0)
        {
            return ans;
        }
        int i=0;
        int j=0;
        bool up=true;
        while(i<row && j<col)
        {
            if(up)
            {
                while(i>0 && j<col-1)
                {
                    ans.push_back(mat[i][j]);
                    j++;
                    i--;
                }
                ans.push_back(mat[i][j]);
                if(j==col-1)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                while(j>0 && i<row-1)
                {
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                ans.push_back(mat[i][j]);
                if(i==row-1)
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }

            up=!up;
        }

        return ans;
         
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends