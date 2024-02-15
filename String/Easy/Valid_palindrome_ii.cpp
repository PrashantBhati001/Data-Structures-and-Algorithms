#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(string &s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
    bool validPalindrome(string s) {
        
        int n=s.size();
        int start=0;
        int end=n-1;

        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                return check(s,start+1,end) || check(s,start,end-1);
            }
        }

        return true;
    }
};