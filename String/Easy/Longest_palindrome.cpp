
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }

        bool flag=false;

        int count=0;
        for(auto i:m)
        {
            if(i.second%2==0)
            {
                count=count+i.second;
            }
            else
            {
                count=count+i.second-1;
                if(flag==false)
                {
                    flag=true;
                    count++;
                }
            }
        }

        return count;
    }
};