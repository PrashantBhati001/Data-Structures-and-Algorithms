#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int time=0;
        int n=tickets.size();
        for(int i=0;i<=k;i++)
        {
            time=time+min(tickets[k],tickets[i]);
        }

        for(int i=k+1;i<n;i++)
        {
            time=time+min(tickets[k]-1,tickets[i]);
        }

        return time;
        
    }
};