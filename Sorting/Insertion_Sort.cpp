#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Insertion_Sort(vector<int> &v)
{
    int len=v.size();
    for(int j=1;j<len;j++)
    {
        int i=j-1;
        int key=v[j];
        while(i>=0 && v[i]>key)
        {
            v[i+1]=v[i];
            i--;
        }

        v[i+1]=key;
    }

}
int main()
{
    vector<int> v={15,8,20,22,5,2,30};
    cout<<"Before Sorting"<<endl;
    for(auto i:v)
    {
        
        cout<<i<<endl;
    }
    Insertion_Sort(v);
    cout<<"After Sorting"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;

}

/*
Time complexity:
   Best case:O(n)
   Worst case:O(n^2)

Space complexity:
   O(1)

*/
