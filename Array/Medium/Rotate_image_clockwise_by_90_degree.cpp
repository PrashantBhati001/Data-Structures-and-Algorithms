#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

    //Approach-1   O(N^2) space complexity
    int N=matrix.size();
    vector<vector<int>> ans(N,vector<int> (N,0)); 
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            ans[j][N-1-i]=matrix[i][j];
        }
    }

    //  Approach-2 //Most optimized   
    //  int n=matrix.size();
    //  for(int i=0;i<n;i++)
    //  {
    //      for(int j=0;j<i;j++)
    //      {
    //          swap(matrix[i][j],matrix[j][i]);
    //      }
    //  }
        
    //  for(int i=0;i<n;i++)
    //  {
    //      reverse(matrix[i].begin(),matrix[i].end());
    //  }
    }
};