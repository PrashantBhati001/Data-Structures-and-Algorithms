#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int p,int r)
{
    int pivot=v[r];
    int i=p-1;
    //int j=p;
    for(int j=p;j<r;j++)
    {
        if(v[j]<=pivot)
        {
            swap(v[++i],v[j]);

        }
    }

    swap(v[i+1],v[r]);

    return i+1;

}

void Quick_Sort(vector<int> &v,int p,int r)
{
    if(p<r)
    {
    int q=partition(v,p,r);
    Quick_Sort(v,p,q-1);
    Quick_Sort(v,q+1,r);
    }
}


int main()
{
    vector<int> v={23,16,0,-1,56,97};
    cout<<"Before sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;

    }
    int p=0;
    int r=v.size()-1;
    Quick_Sort(v,p,r);

    cout<<"After Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;
}


/*
Time Complexity
  Best Case=O(logn)====>when the partition is there in the middle of the array
  Worst case=O(n^2)

Space Complexity
  --->Height of the resursion tree


  */