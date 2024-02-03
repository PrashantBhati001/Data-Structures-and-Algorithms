//This  question is from interview bit which is slighlty on a difficult side.
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:vector<int> twoSum(const vector<int> &A, int B) {
    
    
        
    int n=A.size();
    
    vector<int> ans;
    
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
        int target=B-A[i];
        
        if(m.find(target)!=m.end())
        {
            ans.push_back(m[target]+1);
            ans.push_back(i+1);
            return ans;
        }
        
        else
        {
            
           // if(m.find(A[i])==m.end())
            
                m[A[i]]=i;
            
            
        }
    }
    
    
    return ans;
}

};

int main()
{
    vector<int> v={2,4,5,7,9};
    Solution ob;
    vector<int> ans=ob.twoSum(v,6);
    return 0;
}
