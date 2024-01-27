#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Approach1
        //Find the pivot and search in the left and right part separatley.
        //Finding the pivot==>O(logN)
        //Search in the left part==>O(logN)
        //search in the right part==>O(logN)

        //Approach 2
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target<= nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                    
                }
                
            }
            
            else
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;

        //The above approach has time complexity of O(logN)
    }
};


int main()
{

    vector<int> nums={3,4,5,1,2};
    Solution ob;
    int res=ob.search(nums,5);
    cout<<res<<endl;

    return 0;
}