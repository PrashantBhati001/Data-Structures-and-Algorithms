#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int l1=word1.size();
        int l2=word2.size();
        int i=0;
        int j=0;

        while(i<l1 && j<l2)
        {
            ans=ans+word1[i++];
            ans=ans+word2[j++];
        }

        while(i<l1)
        {
            ans=ans+word1[i++];
        }

        while(j<l2)
        {
            ans=ans+word2[j++];
        }

        return ans;
    }
};