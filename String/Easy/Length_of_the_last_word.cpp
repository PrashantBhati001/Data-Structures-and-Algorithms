#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len=s.size();
        int k=len-1;
        bool flag=false;
        int count=0;
        while(k>=0)
        {
            if(s[k]==' ' && flag==false)
            {
                k--;
            }

            else if(s[k]!=' ')
            {
                count++;
                k--;
                flag=true;
            }
            else if(s[k]==' ' && flag==true)
            {
                break;
            }
        }

        return count;

    }
};