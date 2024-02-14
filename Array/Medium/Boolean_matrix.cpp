//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    
    void markrow(int i,vector<vector<int>> &matrix,int c)
    {
        for(int k=0;k<c;k++)
        {
            if(matrix[i][k]!=1)
            {
                matrix[i][k]=-1;
            }
        }
    }
    
     void markcol(int j,vector<vector<int>> &matrix,int r)
    {
        for(int k=0;k<r;k++)
        {
            if(matrix[k][j]!=1)
            {
                matrix[k][j]=-1;
            }
        }
    }
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        
        int r=matrix.size();
        int c=matrix[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==1)
                {
                    markrow(i,matrix,c);
                    markcol(j,matrix,r);
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=1;
                }
            }
        }
         
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends