#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result(n+1,0);

        for(int i=0;i<n+1;i++)
        {
            if(i%2==0)
            {
                result[i]=result[i/2];

            }
            else
            {
                result[i]=result[i/2]+1;

            }
        }

        return result;

    }
};