#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        if(n==1)
        {
            return nums[0];
        }


        if(nums[0]!=nums[1])
        {
            sum=sum+nums[0];
        }

        if(nums[n-1]!=nums[n-2])
        {
            sum=sum+nums[n-1];
        }

        for(int i=1;i<n-1;i++)
        {
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1])
            {
                sum=sum+nums[i];
            }
        }

        return sum;
        
    }
};


int main()
{

    vector<int> nums={1,2,3,4,4,5,5,5,6};
    Solution ob;
    int res=ob.sumOfUnique(nums);
    cout<<res<<endl;

    return 0;
}