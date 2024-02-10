#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {

        //Approach-1:
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        {
            int pos=s[i]-'a';
            v[pos]++;
        }
        for(int i=0;i<t.size();i++)
        {
            int pos=t[i]-'a';
            v[pos]--;

        }

        for(int i=0;i<26;i++)
        {
            if(v[i]!=0)
            {
                return false;
            }
        }

        return true;
        //Approach-2:
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            return true;
        }

        return false;
    }
};