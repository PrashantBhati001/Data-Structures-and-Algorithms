
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        int n=tokens.size();

        stack<int> st;

        for(int i=0;i<n;i++)
        {
            string ch=tokens[i];
            if(ch=="+")
            {
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();

                int res=first+second;
                st.push(res);
            }
            else if(ch=="-")
            {
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();

                int res=first-second;
                st.push(res);

            }
            else if(ch=="*")
            {
                 int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();

                int res=first*second;
                st.push(res);

            }
            else if(ch=="/")
            {
                 int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();

                int res=first/second;
                st.push(res);

            }
            else
            {
                st.push(stoi(ch));
            }
        }


        return st.top();


        
    }
};