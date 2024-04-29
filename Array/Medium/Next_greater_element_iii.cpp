
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nextGreaterElement(int n) {

        string temp=to_string(n);
        int size=temp.size();
        int k,l;

        for(k=size-2;k>=0;k--)
        {
            if(temp[k]<temp[k+1])
            {
                break;
            }
        }

        if(k<0)
        {
            return -1;
        }

        for(l=size-1;l>k;l--)
        {
            if(temp[l]>temp[k])
            {
                break;
            }
        }

        swap(temp[k],temp[l]);

        reverse(temp.begin()+k+1,temp.end());
        
        auto tempans=stol(temp);

        if(tempans>INT_MAX)
        {
            return -1;
        }

        return tempans;

        
        
    }
};