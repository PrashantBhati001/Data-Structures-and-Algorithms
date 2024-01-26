#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                return 0;
            }

            else if(nums[i]<0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        if(count%2)
        {
            return -1;
        }
        else
        {
            return 1;
        }

        return 0;
        
    }
};


int main()
{

    vector<int> nums={1,2,3,4,4,5,5,5,6};
    Solution ob;
    int res=ob.arraySign(nums);
    cout<<res<<endl;

    return 0;
}