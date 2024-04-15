
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        bool flag=false;
        int rev=0;
        int j=0;
        for(int i=31;i>=0;i--)
        {
            int mask=1<<i;

            if(flag)
            {
                 if(mask & n)
                {
                   // cout<<"1"<<endl;
                   int smask=1<<j;
                   rev=rev | smask;

                }
                else
                {
                    //cout<<0<<endl;
                }
                j++;

                

            }
            else
            {
                if(mask & n)
                {
                   // cout<<"1"<<endl; first 1
                    flag=true;

                    int smask=1<<j;
                    rev=rev|smask;
                    j++;
                }
                else
                {
                    //do nothing 
                    int smask=1<<j;
                    rev=rev & smask;
                    j++;
                }

            }
        }

        return rev;



        
    }
};