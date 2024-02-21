#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        
        int n=s.size();
        map<int,string> m;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                temp=temp+s[i];
            }
            else if(s[i]==' ')
            {
                continue;
            }

            else
            {
                int val=s[i]-'0';
                m[val]=temp;
                temp="";
            }
            
        }
        string res="";
        for(auto i:m)
        {
            res=res+i.second+" ";
        }

        res.pop_back();

        return res;

    }
};