#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int bedsize=flowerbed.size();
        int count=0;
        if(n>bedsize)
        {
            return false;
        }

        if(n==0)
        {
            return true;
        }

        if(n==1 && bedsize==1)
        {
            if(flowerbed[0]==0)
            {
                return true;
            }
        }

        
                if(flowerbed[0]==0 && flowerbed[1]==0)
                {
                    flowerbed[0]=1;
                    n--;               

                }

                if(flowerbed[bedsize-1]==0 && flowerbed[bedsize-2]==0 )
                {
                    flowerbed[bedsize-1]=1;
                    n--;
                }
        
            

                for(int i=1;i<bedsize-1;i++)
                {
                    if(flowerbed[i]==0)
                    {
                        if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
                        {
                            flowerbed[i]=1;
                            n--;
                        }

                        
                    }
                }

                if(n<=0)
                {
                    return true;
                }

                return false;
        
    
    }
};