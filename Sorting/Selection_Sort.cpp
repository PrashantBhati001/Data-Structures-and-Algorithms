#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(v[j]<v[min])
                {
                    min=j;
                }
            }
            swap(v[i],v[min]);
    }



}

int main()
{
vector<int> v={23,15,12,25,32,-1};
cout<<"Before Sorting:"<<endl;
for(auto i:v)
{
    cout<<i<<endl;
}
Selection_Sort(v);
cout<<"After Sorting"<<endl;
for(auto i:v)
{
    cout<<i<<endl;
}
}


/*Time Complexity
   Best Case==Worst case==>O(n^2)

Space Complexity
    O(1)


*/