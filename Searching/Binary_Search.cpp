#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Binary_Search(vector<int> &v,int target)
{
    sort(v.begin(),v.end());
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(v[mid]==target)
        {
            return mid;
        }

        else if(v[mid]>target)
        {
            e=mid-1;
        }

        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }

    return -1;
}



int main()
{
    vector<int> v={89,34,101,250,-1};
    int index=Binary_Search(v,101);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index:"<<index<<endl;
    }

    return 0;

}

/*
Time complexity:
T(n)=T(n/2)+O(1)===>O(logn)

Space complexity:
O(1)==>Non recursive
O(logn)===>Recursive(Stack size)

*/