#include<bits/stdc++.h>

using namespace std;


class Solution {
public:

   //Approach-1 using priority quueue,there we are using an extra space for the heap.
   //Approach-2 using binary search
   int findcount(vector<vector<int>>& matrix,int target)
   {    
        int r=matrix.size();
        int c=matrix[0].size();

        int j=c-1;
        int count=0;

        for(int i=0;i<r;i++)
        {
            for(j;j>=0;j--)
            {
                if(target>=matrix[i][j])
                {
                    count=count+j+1;
                    break;
                }
            }
        }

        return  count;
      
   }

    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int l=matrix[0][0];

        int r=matrix.size();
        int c=matrix[0].size();

        int h=matrix[r-1][c-1];

        while(l<h)
        {
            int mid=l+(h-l)/2;
            int count=findcount(matrix,mid);

            if(count<k)
            {
                l=mid+1;
            }
            else
            {
                h=mid;
            }
        }

        return l;
        
    }
};