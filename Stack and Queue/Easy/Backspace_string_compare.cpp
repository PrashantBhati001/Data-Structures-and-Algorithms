

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st1;
        stack<char> st2;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
                st1.push(s[i]);
            }
            else
            {
                if(st1.empty())
                {
                    continue;
                }
                else
                {
                    st1.pop();
                }
            }
        }



           for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
                st2.push(t[i]);
            }
            else
            {
                if(st2.empty())
                {
                    continue;
                }
                else
                {
                    st2.pop();
                }
            }
        }

        return st1==st2;
        
    }
};










// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         int k=0,p=0;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='#')
//             {
//                 k--;
//                  k=max(0,k);
//             }
            
//            else
//            {
//                s[k]=s[i];
//                k++;
//            }
//         }
//         for(int i=0;i<t.size();i++)
//         {
//             if(t[i]=='#')
//             {
//                 p--;
//                  p=max(0,p);
//             }
            
//            else
//            {
//                t[p]=t[i];
//                p++;
//            }
//         }
//         if(k!=p)
//             return false;
//         else
//         {
//             for(int i=0;i<k;i++)
//             {
//                 if(s[i]!=t[i])
//                     return false;
//             }
//             return true;
//         }
        
//     }
// };