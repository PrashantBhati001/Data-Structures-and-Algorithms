#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string decodeString(string s) {

        string currnum="";
        string currstring ="";
        string prevnum="";
        string prevstring="";
        string temp="";

        stack<string> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                currnum=currnum+s[i];
            }
            else if(s[i]=='[')
            {
                st.push(currstring);
                st.push(currnum);
                currnum="";
                currstring ="";
            }

            else if(s[i]==']')
            {
                 prevnum= st.top();
                 st.pop();
                 prevstring=st.top();
                 st.pop();

                 int prevtruenum=stoi(prevnum);

                temp="";

                 while(prevtruenum--)
                 {
                    temp=temp+currstring;
                 }

                 currstring=prevstring+temp;

            }
            else
            {
                currstring=currstring+s[i];
            }
        }

        return currstring;


        
    }
};