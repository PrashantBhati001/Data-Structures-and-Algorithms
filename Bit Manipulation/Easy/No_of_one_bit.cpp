#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int hammingWeight(uint32_t n) {

        //Approach-1
        // int count=0;
        // while(n)
        // {
        //     if(n&1)
        //     {
        //         count++;
        //     }

        //     n=n>>1;
        // }

        // return count;

        //Approach2
        int count=0;
        while(n)
        {
            n=n&(n-1);
            count++;
        }

        return count;
    }
};