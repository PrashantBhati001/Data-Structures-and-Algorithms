#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countoccurence(int target,vector<int> &nums)
    {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=target)
            {
                cnt++;
            }
        }

        return cnt;

    }
    int specialArray(vector<int>& nums) {
        
        int n=nums.size();
        int start=0;
        int end=n;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int count=countoccurence(mid,nums);

            if(count==mid)
            {
                return mid;
            }

            if(count>mid)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }


        return -1;


    }
};

int main()
{

    vector<int> nums={1,1,1,2,4,5,6,7,2,0};
    Solution ob;
    bool res=ob.specialArray(nums);
    cout<<res<<endl;

    return 0;
}