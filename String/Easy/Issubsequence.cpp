#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int sl=s.size();
        int tl=t.size();

        if(sl>tl)
        {
            return false;
        }

        int i=0;
        int j=0;

        while(i<sl && j<tl)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        if(i==sl)
        {
            return true;
        }

        return false;
        
    }
};