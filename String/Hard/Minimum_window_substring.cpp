
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {

        int ss=s.size();
        int ts=t.size();
        int ans=0;
        int temp=0;
        int start=0;
        int end=0;


        if(ts>ss)
        {
            return "";
        }

        
        int i=0;
        int j=0;
        

        unordered_map<char,int> m2;

        for(int i=0;i<t.size();i++)
        {
            m2[t[i]]++;
        }

        int dcnt=t.size();
        int mcnt=0;
        unordered_map<char,int> m1;

        while(true)
        {

            bool f1=false;
            bool f2=false;
            while(i<s.size() && mcnt<dcnt)
            {
                f1=true;
                
                
                m1[s[i]]++;

                if(m2.find(s[i])!=m2.end() && m1[s[i]]<=m2[s[i]])
                {
                    mcnt++;
                }

                i++;

                

            }

            while(j<i && mcnt==dcnt)
            {
                f2=true;
                
                temp=i-j;
                if(ans == 0 ||  ans>temp)
                {
                    ans=temp;
                    start=j;
                    end=i;
                }

                
                if(m1[s[j]]==1)
                {
                    m1.erase(s[j]);
                }
                else{
                    m1[s[j]]--;
                }

                if(m2.find(s[j])!=m2.end() && m1[s[j]]<m2[s[j]])
                {
                    mcnt--;
                }

                j++;

                
            }

            if(f1==false && f2==false)
            {
                break;
            }
        }



        return  s.substr(start,end-start) ;
        
    }
};