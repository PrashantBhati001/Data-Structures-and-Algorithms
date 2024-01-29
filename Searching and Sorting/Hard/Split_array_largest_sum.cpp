#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int ans=0;
        int maxi=-1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            maxi=max(maxi,nums[i]);
        }

        int start=maxi;
        int end=sum;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int pages=0;
            int count=1;

            for(int i=0;i<n;i++)
            {
                pages=pages+nums[i];
                if(pages>mid)
                {
                    count++;
                    pages=nums[i];
                }
            }

            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }


        return ans;
        
    }
};

int main() {
   
    vector<int> v={7,2,5,10,8};
    Solution ob;
    int k=7;
    int res=ob.splitArray(v,k);
    cout<<res<<endl;
    return 0;
}