#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        int n=emails.size();
        unordered_map<string,int> m;

        for(int i=0;i<n;i++)
        {
            string s=emails[i];
            int j=0;
            int size=s.size();
            string temp="";

            while(j<size)
            {

                if(s[j]>='a' && s[j]<='z')
                {
                    temp=temp+s[j];
                    j++;
                }
                else
                {
                    if(s[j]=='+')
                    {
                        while(j+1<size && s[j+1]!='@')
                        {
                            j++;
                        }
                        j++;
                        while(j<size)
                        {
                            temp=temp+s[j];
                            j++;
                        }
                    }

                    else if(s[j]=='@')
                    {
                         while(j<size)
                        {
                            temp=temp+s[j];
                            j++;
                        }
                    }
                    j++;
                }

            }

            m[temp]++;
            
        }

        return m.size();
    }
};