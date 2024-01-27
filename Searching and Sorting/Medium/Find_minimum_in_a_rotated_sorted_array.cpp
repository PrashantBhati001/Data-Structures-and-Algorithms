#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
     
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(nums[mid]>nums[e])
            {
                s=mid+1;
            }
            else 
                e=mid;
            
            
            mid=s+(e-s)/2;
        }
        
        
        return nums[s];
    }
};

int main()
{

    vector<int> v={3,4,5,1,2};
    Solution ob;

    cout<<ob.findMin(v)<<endl;
    return 0;
}