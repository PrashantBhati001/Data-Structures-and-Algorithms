#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                e=mid-1;
                
            }
            else
                s=mid+1;
            
            mid=s+(e-s)/2;
            
            }
        
        return s;
    }
};


int main()
{

    vector<int> nums={1,2,3,4,4,5,5,5,6};
    Solution ob;
    int res=ob.searchInsert(nums,7);
    cout<<res<<endl;

    return 0;
}