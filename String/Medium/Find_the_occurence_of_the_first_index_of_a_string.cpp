#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

   void findlps(vector<int> &lps,string &needle){

       int pre=0;
       int suff=1;
       while(suff<needle.size())
       {
           if(needle[pre]==needle[suff])
           {
               lps[suff]=pre+1;
               pre++;
               suff++;
           }
           else
           {
               if(pre==0)
               {
                   lps[suff]=0;
                   suff++;
               }
               else
               {
                   pre=lps[pre-1];
               }
           }
       }
   }
    int strStr(string haystack, string needle) {

        vector<int> lps(needle.size(),0);

        findlps(lps,needle);

        int first=0;
        int second=0;

        while(second<needle.size() && first<haystack.size())
        {
            if(haystack[first]==needle[second])
            {
                first++;
                second++;
            }
            else
            {
                if(second==0)
                {
                    first++;
                }
                else
                {
                    second=lps[second-1];
                }
            }
        }

        if(second==needle.size())
        {
            return first-second;
        }

        return -1;
        
    }
};