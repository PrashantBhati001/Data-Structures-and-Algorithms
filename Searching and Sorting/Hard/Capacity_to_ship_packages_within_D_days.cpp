#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum=0;
        int maxi=-1;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
            maxi=max(maxi,weights[i]);
        }

        int start=maxi;
        int end=sum;
        int ans=0;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int pages=0;
            int count=1;

            for(int i=0;i<weights.size();i++)
            {
                pages=pages+weights[i];
                if(pages>mid)
                {
                    count++;
                    pages=weights[i];
                }
            }

            if(count<=days)
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
    int res=ob.shipWithinDays(v,k);
    cout<<res<<endl;
    return 0;
}

