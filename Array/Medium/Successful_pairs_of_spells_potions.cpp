#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        

        int s=spells.size();
        int p=potions.size();
        vector<int> res;

        sort(potions.begin(),potions.end());

        for(int i=0;i<s;i++)
        {
            //long long int target=success/spells[i];

            int start=0;
            int end=p-1;
            int ans=-1;

            while(start<=end)
            {
                int mid=start+(end-start)/2;
                long long int product =(long long)potions[mid]*(long long)spells[i];
                if(product>=success)
                {
                    ans=mid;
                    end=mid-1;
                    
                }
                else
                {
                    start=mid+1;
                }
            }

            if(ans==-1)
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(p-ans);
            }

            
        }

        return res;

    }
};