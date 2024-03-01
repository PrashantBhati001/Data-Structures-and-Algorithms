#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reachNumber(int target) {
        
        int jump=1;
        int sum=0;

        target=abs(target);
        while(sum<target)
        {
            sum=sum+jump;
            jump++;
        }

        if((sum-target)%2==0)
        {
            return jump-1;
        }

        else if((sum+jump-target)%2==0)
        {
            return jump;
        }
        else
        {
            return jump+1;
        }
      
      return jump;

    }
};