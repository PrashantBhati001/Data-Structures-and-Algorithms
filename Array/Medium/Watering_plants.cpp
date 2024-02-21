#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int n=plants.size();
        int current_capacity=capacity;
        int dist=0;

        for(int i=0;i<n;i++)
        {
            if(current_capacity>=plants[i])
            {
                current_capacity=current_capacity-plants[i];
            }

            if(i+1<n && current_capacity>=plants[i+1])
            {
                
                continue;
            }

            else
            {
                        if(i==n-1)
                        {
                            break;
                        } 
                                  
                        dist=dist+2*(i+1);
                        current_capacity=capacity;    
            
            }
        }

        dist=dist+n;

        return dist;

    }
};