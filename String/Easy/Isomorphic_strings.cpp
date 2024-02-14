#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<char,char> m1;
        unordered_map<char,bool> m2;

        for(int i=0;i<n;i++)
        {
            if(m1.find(s[i])==m1.end())
            {
                if(m2.find(t[i])==m2.end())
                {
                    m1[s[i]]=t[i];
                    m2[t[i]]=true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if((m2.find(t[i])==m2.end()) || (m1[s[i]]!=t[i]))
                {
                    return false;
                }
                
            }
        }

        return true;
    }
};