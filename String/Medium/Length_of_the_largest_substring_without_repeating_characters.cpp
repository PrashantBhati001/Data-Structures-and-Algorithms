#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        unordered_map<char,int> m;
        int end=0;
        int start=0;
        int len=0;
        int ans=0;

        while(end<n)
        {
            if(m.find(s[end])==m.end())
            {
                m[s[end]]=end;
                len=end-start+1;
                ans=max(ans,len);
                end++;
            }
            else{

               if(m[s[end]]<start)
               {
                   len=end-start+1;
                   ans=max(ans,len);
                   m[s[end]]=end;
                   end++;
               } 
               else
               {
                   start=m[s[end]]+1;
                   m[s[end]]=end;
                   len=end-start+1;
                   ans=max(ans,len);
                   end++;

               }


            }
        }


        return ans;

        


    }
};