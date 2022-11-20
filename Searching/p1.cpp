#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Linear_Search(vector<int> &v,int target)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
            if(v[i]==target)
            {
                cout<<"Element found at index:"<<i<<endl;
                return;
            }
    }

    cout<<"Element is not present in the input"<<endl;
}
int main()
{
    vector<int> v={20,21,12,0,3,6};
    Linear_Search(v,20);
    return 0;
}

/*
Time Complexity:
    Best case:O(1)
    Worst case:O(n)
Space complexity:
    O(1)

*/

