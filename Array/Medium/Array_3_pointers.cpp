#include<bits/stdc++.h>
using namespace std;

class Solution {
     public :
    int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int n1=A.size();
    int n2=B.size();
    int n3=C.size();
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    
    while(i<n1 && j<n2 && k<n3)
    {
        int mini=min({A[i],B[j],C[k]});
        int diff=max({A[i],B[j],C[k]})-mini;
        ans=min(ans,diff);
        
        if(mini==A[i])
        {
            i++;
        }
        else if(mini==B[j])
        {
            j++;
        }
        else{
            k++;
        }
        
        
    }
    
    return ans;
    
    
}
};

int main()
{

    vector<int> A={1, 4, 10};
    vector<int> B={2, 15, 20};
    vector<int> C={10,12};

    Solution ob;
    cout<<ob.minimize(A,B,C)<<endl;
    return 0;
}