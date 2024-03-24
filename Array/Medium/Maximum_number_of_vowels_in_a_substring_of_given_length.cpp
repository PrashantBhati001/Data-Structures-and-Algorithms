#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
          
         // unordered_map<char,int> m;
         int count=0;
          int n=s.size();
          int ans=0;
          for(int i=0;i<k;i++)
          {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                 count++;
            }
          }



          int start=0;
          int end=k-1;

          while(end<n)
          {
                if(count>ans)
                {
                    ans=count;
                }

                if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u')
                {
                    count--;
                    
                }
                start++;
                end++;

                
                if(end<n)
                {
                     if(s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u')
                        {
                            count++;
                        }

                }
               

          }

          return ans;

    }
};