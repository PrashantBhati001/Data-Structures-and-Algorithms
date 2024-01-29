#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long int sum=0;
        int ans=0;
        int max_item=INT_MIN;
        int N=piles.size();
        
        for(int i=0;i<N;i++)
        {
            sum=sum+piles[i];
            max_item=max(max_item,piles[i]);
        }
        
        int start=sum/h;
        if(!start)
        {
            start=1;
        }
        int end=max_item;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int total_time=0;
            
            for(int i=0;i<N;i++)
            {
                total_time=total_time+piles[i]/mid;
                if(piles[i]%mid)
                {
                    total_time++;
                }
            }
            
            if(total_time>h)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        
        
        return ans;
        
        
    }
};

int main() {
   
    vector<int> v={3,6,7,11};
    Solution ob;
    int h=8;
    int res=ob.minEatingSpeed(v,h);
    cout<<res<<endl;
    return 0;
}