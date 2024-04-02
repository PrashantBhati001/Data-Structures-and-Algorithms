#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector <int>& height) {

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
};