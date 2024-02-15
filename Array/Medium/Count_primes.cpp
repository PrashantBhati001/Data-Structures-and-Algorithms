#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPrimes(int n) {

        if(n==0 || n==1)
        {
            return 0;
        }
        int count=0;
        vector<bool> v(n,true);
        v[0]=false;
        v[1]=false;

        for(int i=2;i<n;i++)
        {
            if(v[i]==true)
            {
                count++;
                for(int k=i*2;k<n;k=k+i)
                {
                    v[k]=false;
                }
            }
        }

        return count;

    }
};