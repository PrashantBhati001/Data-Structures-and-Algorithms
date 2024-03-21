#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n1=s1.size();
        int n2=s2.size();

        if(n1>n2)
        {
            return false;
        }

        unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        for(int i=0;i<n1;i++)
        {
            m1[s1[i]]++;
        }

        for(int i=0;i<n1;i++)
        {
            m2[s2[i]]++;
        }

        int start=0;
        int end=n1-1;
        

        while(end<n2)
        {
            if(m1==m2)
            {
                return true;
            }
            else
            {
                if(m2[s2[start]]==1)
                {
                    m2.erase(s2[start]);
                    start++;
                }
                else
                {
                    m2[s2[start]]--;
                    start++;
                }
                end++;
                m2[s2[end]]++;
            }
        }


        return false;

        


    }
};