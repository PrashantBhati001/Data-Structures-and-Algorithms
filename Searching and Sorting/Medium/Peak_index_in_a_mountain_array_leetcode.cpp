#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        //Approach 1

        // int n=arr.size();
        // int start=0;
        // int end=n-1;

        // while(start<end)
        // {
        //     int mid=start+(end-start)/2;
        //     if(arr[mid]<arr[mid+1])
        //     {
        //         start=mid+1;
        //     }
        //     else
        //     {
        //         end=mid;
        //     }
        // }

        // return start;



        //Approach 2

        //     int start=0;
        // int end=arr.size()-1;
        // int n=arr.size();

        // if(n==1)
        // {
        //     return 0;
        // }

        

        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if((mid==0||arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
        //     {
        //         return mid;
        //     }
        //     else if(arr[mid]<=arr[mid+1])
        //     {
        //         start=mid+1;
        //     }

        //     else
        //     {
        //         end=mid-1;
        //     }
        // }

        // return -1;


        //Approach 3(Only for question peak in  a mountain array)

        // int n=arr.size();
        // int start=0;
        // int end=n-1;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        //     {
        //         return mid;
        //     }
        //     else if(arr[mid]<arr[mid+1])
        //     {
        //         start=mid+1;
        //     }
        //     else
        //     {
        //         end=mid-1;
        //     }
        // }

        // return -1;



    }
};



int main()
{

    vector<int> num={1,2,3,4,3,2,1};
    Solution ob;
    int res=ob.peakIndexInMountainArray(num);
    cout<<res<<endl;

    return 0;
}