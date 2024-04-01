#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {

        int n=operations.size();
        stack<int> st;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {
                int d1=st.top();
                st.pop();
                int d2=st.top();
                st.push(d1);
                st.push(d1+d2);
            }
            else if(operations[i]=="D")
            {
                int d=st.top();
                st.push(d*2);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else
            {
                int d=stoi(operations[i]);
                st.push(d);
            }
        }

        while(!st.empty())
        {
            sum=sum+st.top();
            st.pop();

        }

        return sum;

        
    }
};