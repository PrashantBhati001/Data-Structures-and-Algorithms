#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int largestRectangleArea(vector<int>& height) {

        int n=height.size();
        int ans=0;
        stack<int> st;

        for(int i=0;i<n;i++)
        {
            while(!st.empty() && height[i]<height[st.top()])
            {
                int index=st.top();
                st.pop();
                if(!st.empty())
                {
                    ans=max(ans,height[index]*(i-st.top()-1));
                }
                else
                {
                    ans=max(ans,height[index]*(i));
                }
            }

            st.push(i);
        }

        while(!st.empty())
        {

                int index=st.top();
                st.pop();
                if(!st.empty())
                {
                    ans=max(ans,height[index]*(n-st.top()-1));
                }
                else
                {
                    ans=max(ans,height[index]*(n));
                }

        }

        return ans;

        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {

        int ans=0;
        int r=matrix.size();
        int c=matrix[0].size();

        vector<int> height(c,0);

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]=='0')
                {
                    height[j]=0;
                }
                else
                {
                    height[j]=height[j]+1;
                }
            }

            ans=max(ans,largestRectangleArea(height));
        }

        return ans;
        
    }
};