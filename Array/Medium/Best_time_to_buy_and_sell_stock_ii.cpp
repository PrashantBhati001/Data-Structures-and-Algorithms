#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int bd=0;
        int sd=0;
        int max_profit=0;

        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                sd++;
            }
            else
            {
                max_profit+=prices[sd]-prices[bd];
                bd=i;
                sd=i;
            }
        }

        max_profit+=prices[sd]-prices[bd];

        return max_profit;

    }
};