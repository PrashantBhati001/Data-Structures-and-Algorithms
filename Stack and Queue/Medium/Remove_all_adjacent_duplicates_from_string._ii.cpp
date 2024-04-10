#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>> st;

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first!=s[i])
                {
                    st.push({s[i],1});
                }
                else
                {
                    st.top().second++;

                    if(st.top().second==k)
                    {
                        st.pop();
                    }
                }
            }
        }

        string res="";

        while(!st.empty())
        {
            pair<char,int> p=st.top();
            st.pop();
            string temp="";
            while(p.second)
            {
                temp=temp+p.first;
                p.second--;
            }
            res=temp+res;

        }

        return res;

    
                    
    }
};