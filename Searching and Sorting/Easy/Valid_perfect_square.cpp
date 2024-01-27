#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num==1)
        {
            return true;
        }
        
        int s=1;
        int e=num;
        long mid=s+(e-s)/2;
        while(s<=e)
        {
            if(mid*mid==num)
            {
                return true;
                
            }
            
            else if(mid*mid>num)
            {
                e=mid-1;
            }
            else
                s=mid+1;
            
            
            mid=s+(e-s)/2;
            
        }
        
        return false;
    }
};

int main()
{

    
    Solution ob;
    bool res=ob.isPerfectSquare(7);
    cout<<res<<endl;

    return 0;
}