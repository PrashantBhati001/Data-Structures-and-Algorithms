
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestValidParentheses(string s) {

        int n=s.size();
        int left=0;
        int right=0;
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                left++;
            }

            else
            {
                right++;
            }

            if(left==right)
            {
                ans=max(ans,left*2);
            }
            else if(right>left)
            {
                left=0;
                right=0;
            }
        }

        left=0;
        right=0;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                right++;
            }
            else
            {
                left++;
            }

            if(left==right)
            {
                 ans=max(ans,left*2);
            }
            else if(left>right)
            {
                left=0;
                right=0;
            }
        }

        return ans;
        


        
    }
};