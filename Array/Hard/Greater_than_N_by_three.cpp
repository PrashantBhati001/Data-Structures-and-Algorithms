#include<bits/stdc++.h>
using namespace std;
class Solution{
public:int repeatedNumber(const vector<int> &A) {


    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int cnt1=0;
    int cnt2=0;
    int cand1=0;
    int cand2=0;
    int n=A.size();
    
    for(auto i:A)
    {
        
        if(i==cand1)
        {
            cnt1++;
        }
        
        else if(i==cand2)
        {
            cnt2++;
        }
        
        else if(cnt1==0)
        {
            cand1=i;
            cnt1++;
        }
        
        else if(cnt2==0)
        {
            cand2=i;
            cnt2++;
        }
        
        else{
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1=0;
    cnt2=0;
    
    for(auto i:A)
    {
        if(i==cand1)
        {
            cnt1++;
        }
        
        if(i==cand2)
        {
            cnt2++;
        }
    }
    
    if(cnt1 > (n/3))
    {
        return cand1;
    }
    
    else if(cnt2 > (n/3))
    {
        return cand2;
    }
    
    else{
        return -1;
    }
}
};