#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n)
{
     int s=0;
     int e=n-1;

     while(s<e)
     {
        swap(arr[s],arr[e]);
        s++;
        e--;
     }

     
}

int main()
{

    int arr[]={1,2,3,5,7};
    reversearray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}