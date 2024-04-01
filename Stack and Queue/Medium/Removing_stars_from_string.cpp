#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {

        string ans="";
        int n=s.size();

        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='*')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }

        }

        int i=0;
        while(!st.empty())
        {
            s[i]=st.top();
            i++;
            st.pop();
        }

        //reverse(ans.begin(),ans.end());

        string temp=s.substr(0,i);
        reverse(temp.begin(),temp.end());

        return temp;
        
    }
};






// class Solution {
// public:
//     string removeStars(string s) {
//         string c="";
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='*'){
//                 c.pop_back();
//             }else{
//                 c+=s[i];
//             }
            
//         }
//         return c;
//     }
// };