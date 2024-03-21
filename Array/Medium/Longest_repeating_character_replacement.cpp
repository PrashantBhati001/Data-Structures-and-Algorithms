#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   int maxelementfrommap(unordered_map<char,int> &m)
   {
      int count=0;
      for(auto i:m)
      {
        if(i.second>count)
        {
            count=i.second;
        }
      }

      return count;
   }
    int characterReplacement(string s, int k) {

        unordered_map<char,int> m;
        int n=s.size();

        int start=-1;
        int end=-1;
        int ans=0;

        while(true)
        {
            bool f1=false;
            bool f2=false;

            while(end<n-1)
            {
                f1=true;
                end++;
                m[s[end]]++;

                int wsize=end-start;
                int maxele=maxelementfrommap(m);
                int remele=wsize-maxele;

                if(remele<=k)
                {
                    if(wsize>ans)
                    {
                        ans=wsize;
                    }
                    
                }
                else
                {
                    break;
                }

            }

            while(start<end)
            {
                f2=true;
                start++;
                if(m[s[start]]==1)
                {
                    m.erase(s[start]);
                }
                else
                {
                    m[s[start]]--;
                }
                
                int wsize=end-start;
                int maxele=maxelementfrommap(m);
                int remele=wsize-maxele;


                if(remele<=k)
                {
                    if(wsize>ans)
                    {
                        ans=wsize;
                    }
                    break;
                    
                }
                else
                {
                    continue;
                }



            }

            if(f1==false && f2==false)
            {
                break;
            }
        }

        return ans;
        
    }
};