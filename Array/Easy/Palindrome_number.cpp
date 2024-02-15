#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        {
            return false;
        }
        
        int temp=x;
        int ans=0;
        int rem;
        while(temp)
        {
            rem=temp%10;
            if(ans>(INT_MAX)/10)
            {
                return 0;
            }
            ans=ans*10+rem;
            temp=temp/10;
        }

        if(ans==x)
        {
            return true;
        }

        return false;
    }
};