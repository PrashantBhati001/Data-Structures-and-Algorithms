#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {

        int n=s.size();
        stack<char> st;

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()==s[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        
        string res="";

        while(!st.empty())
        {
            res=st.top()+res;
            st.pop();
        }

        return res;
        
    }
};