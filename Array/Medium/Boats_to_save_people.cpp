#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        

        sort(people.begin(),people.end());
        int n=people.size();
        int count=0;
        int start=0;
        int end=n-1;

        while(start<=end)
        {
            if(people[start]+people[end]<=limit)
            {
                count++;
                start++;
                end--;
            }
            else
            {
                count++;
                end--;
            }
        }

        return count;
    }
};