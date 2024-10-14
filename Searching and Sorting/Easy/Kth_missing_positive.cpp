#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

  //O(n) approach
    //   int findKthPositive(vector<int>& arr, int k) {

    //     int n=arr.size();
    //     int num=1;
    //     int i=0;
    //     while(i<n)
    //     {
    //         if(arr[i]==num)
    //         {
    //             i++;
    //             num++;
    //         }
    //         else
    //         {
    //             k--;
    //             if(k==0)
    //             {
    //                 return num;
    //             }

    //             num++;
    //         }

    //     }

    //     while(k)
    //     {
    //         num++;
    //         k--;

    //     }

    //     return num-1;
  
        
    // }

    int findKthPositive(vector<int>& arr, int k) {

         int n=arr.size();
        int start=0;
        int end=n-1;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int nomissing=arr[mid]-(mid+1);

            if(nomissing<k)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

        return start+k;
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