#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(vector<int> &v)
{
    int n=v.size();
    for(int i=1;i<=n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<=n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
             swap(v[j],v[j+1]);
             swapped=1;
            }        
        }

        if(swapped=0)
        {
            break;
        }

    }


}
int main()
{
    vector<int> v={24,26,2,-1,5,50};
    cout<<"Before Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }
     Bubble_Sort(v);
     cout<<"After Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;

}

/*
Time complexity
  Best Case:O(n)
  Worst Case:O(n^2)

Space complexity
  O(1)

*/