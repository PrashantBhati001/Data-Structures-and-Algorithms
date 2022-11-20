#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &v,int p,int mid,int r)
{
    int l1=mid-p+1;   //Size of 1st part
    int l2=r-mid;     //size of 2nd part
    vector<int> v1(l1);
    vector<int> v2(l2);
    int j=0;
    int k=0;
    for(int i=p;i<=mid;i++)
    {
        v1[j++]=v[i];
    }

    for(int i=mid+1;i<=r;i++)
    {
        v2[k++]=v[i];
    }
     j=0;
     int i=0;
     k=p;
    
    while(j<l1 && i<l2)
    {
        if(v1[j]>v2[i])
        {
            v[k]=v2[i];
            k++;
            i++;

        }
        else{
            v[k]=v1[j];
            k++;
            j++;
        }

    }

    while(j<l1)
    {
        v[k]=v1[j];
        k++;
        j++;
    }

    while(i<l2)
    {
        v[k]=v2[i];
        k++;
        i++;
    }


}

void Merge_Sort(vector<int> &v,int p,int r)
{
    if(p<r)
    {
        int mid=p+(r-p)/2;
        Merge_Sort(v,p,mid);
        Merge_Sort(v,mid+1,r);
        Merge(v,p,mid,r);
    }
}


int main()
{
    vector<int> v={17,23,5,1,36,50,-1,7};
    cout<<"Before Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    int p=0;
    int r=v.size()-1;
    Merge_Sort(v,p,r);
    cout<<"After Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;

    
}


/*
Time complexity
Best case==Worst case==>O(logn)

Space complexity
===>Heightof the  recursion tree.

*/