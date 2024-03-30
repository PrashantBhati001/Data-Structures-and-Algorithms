#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {

        int n=s.size();
        stack<char> st;
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    count++;
                }
                else
                {
                    st.pop();
                }
            }
        }

        return st.size()+count;


        
    }
};