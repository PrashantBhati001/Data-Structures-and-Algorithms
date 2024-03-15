#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int,int> binarysearch(int target,vector<int>& heaters)
    {
        pair<int,int> p={-1,-1};

        int low=0;
        int high=heaters.size()-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(heaters[mid]==target)
            {
                p.first=heaters[mid];
                p.second=heaters[mid];
                return p;
            }
            else if(heaters[mid]<target)
            {
                p.first=heaters[mid];
                low=mid+1;
            }
            else
            {
                p.second=heaters[mid];
                high=mid-1;
            }
        }

        return p;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        sort(heaters.begin(),heaters.end());
        int ans=INT_MIN;

        for(int i=0;i<houses.size();i++)
        {
            pair<int,int> p=binarysearch(houses[i],heaters);
            int d1=p.first==-1?INT_MAX:houses[i]-p.first;
            int d2=p.second==-1?INT_MAX:p.second-houses[i];

            int min_dist=min(d1,d2);
            if(min_dist>ans)
            {
                ans=min_dist;
            }
        
        }

        return ans;
    }
};