#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int n=sentence.size();
        vector<int> v(26,0);
        if(n<26)
        {
            return false;
        }

        else 
        {
            for(int i=0;i<n;i++)
            {
                int pos=sentence[i]-'a';
                v[pos]++;
            }

            for(int i=0;i<26;i++)
            {
                if(v[i]==0)
                {
                    return false;
                }
            }

           return true;

        }

        return true;
    }
};