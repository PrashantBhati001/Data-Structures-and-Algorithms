#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int> (n,0));
        int r=n;
        int c=n;
        int total=r*c;
        int count=0;
        int sr=0;
        int er=r-1;
        int sc=0;
        int ec=c-1;
    
        int i=1;
        while(count<total)
        {
            for(int index=sc;count<total && index<=ec;index++)
            {
                v[sr][index]=i;
                i++;
                count++;
            }
            sr++;
             for(int index=sr;count<total && index<=er;index++)
            {
                v[index][ec]=i;
                i++;
                count++;
            }
            ec--;
             for(int index=ec;count<total && index>=sc;index--)
            {
                v[er][index]=i;
                i++;
                count++;
            }
            er--;
             for(int index=er;count<total && index>=sr;index--)
            {
                v[index][sc]=i;
                i++;
                count++;
            }
            sc++;
            
        }
        return v;
        
    }
};