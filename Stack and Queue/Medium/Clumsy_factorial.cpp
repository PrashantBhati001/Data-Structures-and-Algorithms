#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int clumsy(int n) {

        queue<char> q;
        q.push('*');
        q.push('/');
        q.push('+');
        q.push('-');

        stack<int> st;
        st.push(n);

        for(int i=n-1;i>=1;i--)
        {
            char ch=q.front();
            q.pop();
            if(ch=='*')
            {
                int ele=st.top();
                st.pop();

                int res=ele*i;
                st.push(res);
                q.push(ch);
            }
            else if(ch=='/')
            {
                int ele=st.top();
                st.pop();
                int res=ele/i;
                st.push(res);
                q.push(ch);

            }
            else if(ch=='+')
            {
                 st.push(i);
                 q.push(ch);
            }
            else
            {
                st.push(-i);
                q.push(ch);
            }


        }

        int ans=0;

        while(!st.empty())
        {
            ans=ans+st.top();
            st.pop();
        }

        return ans;


        
    }
};