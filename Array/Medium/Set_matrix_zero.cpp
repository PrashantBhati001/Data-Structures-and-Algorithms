#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool rowflag=false;
        bool colflag=false;
        int r=matrix.size();
        int c=matrix[0].size();

        for(int i=0;i<c;i++)
        {
            if(matrix[0][i]==0)
            {
                rowflag=true;
            }
        }

        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]==0)
            {
                colflag=true;
            }
        }

        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }

        if(rowflag)
        {
            for(int i=0;i<c;i++)
            {
                matrix[0][i]=0;
            }
        }

        if(colflag)
        {
            for(int i=0;i<r;i++)
            {
                matrix[i][0]=0;
            }
        }


    }
};