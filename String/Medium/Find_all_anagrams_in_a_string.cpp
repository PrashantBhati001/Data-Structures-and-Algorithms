#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        unordered_map<char,int> mp;

        for(int i=0;i<p.size();i++)
        {
            mp[p[i]]++;
        }

        int ws=p.size();

        vector<int> ans;

        unordered_map<char,int> ms;

        for(int i=0;i<ws;i++)
        {
            ms[s[i]]++;
        }

        if(ms==mp)
        {
            ans.push_back(0);
        }

        int start=0;
        int end=ws-1;

        while(end<s.size())
        {
            if(ms[s[start]]==1)
            {
                ms.erase(s[start]);
            }
            else
            {
                ms[s[start]]--;
            }
            start++;
            end++;
            if(end<s.size())
            {
                 ms[s[end]]++;
                 if(ms==mp)
                    {
                        ans.push_back(start);
                    }

            }
        }

        return ans;


        
    }
};