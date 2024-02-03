//This  question is from interview bit which is slighlty on a difficult side.
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: int solve(vector<int> &A, int B) { 
    sort(A.begin(),A.end());
    if(B<0)
    {
        B=B*(-1);
    }
    
    int start=0;
    int end=1;
    int n=A.size();
    while(start<end && start<n && end<n)
    {
        if(A[end]-A[start]==(B))
        {
            return 1;
        }
        
        else if(A[end]-A[start]>(B))
        {
            start++;
        }
        else{
            end++;
        }
        
        if(start==end)
        {
            end++;
        }
    }
    
    return 0;
        
}

};

int main()
{
    vector<int> v={2,4,5,7,9};
    Solution ob;
    int ans=ob.solve(v,6);
    cout<<ans<<endl;
    return 0;
}
