#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n=arr.size();
        int start=0;
        int end=n-1;
        int ans=n;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]-mid-1>=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        

        return ans+k;
    }
};

int main()
{

    vector<int> nums={1,2,3,4,4,5,5,5,6};
    Solution ob;
    int res=ob.findKthPositive(nums,7);
    cout<<res<<endl;

    return 0;
}