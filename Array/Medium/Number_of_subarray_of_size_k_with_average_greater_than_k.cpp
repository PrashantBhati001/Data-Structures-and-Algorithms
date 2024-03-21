#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+arr[i];
        }

        int start=0;
        int end=k-1;
        int count=0;

        while(end<n)
        {
            int average=sum/k;
            if(average>=threshold)
            {
                count++;
            }

            sum=sum-arr[start];
            start++;


            end++;
            if(end<n)
            {
                sum=sum+arr[end];
            }
            
        }

        return count;

    }
};