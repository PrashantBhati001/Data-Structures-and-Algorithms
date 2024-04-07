
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        int pushs=pushed.size();
        int pops=popped.size();
        stack<int> st;

        int i=0;
        int j=0;

        while(i<pushs && j<pops)
        {
            st.push(pushed[i]);

            while(!st.empty() && j<pops && popped[j]==st.top())
            {
                st.pop();
                j++;
            }
            i++;
        }

        return st.empty();
         

        

        
        
    }
};