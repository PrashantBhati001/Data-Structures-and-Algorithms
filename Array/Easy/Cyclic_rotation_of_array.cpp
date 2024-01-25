//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends




//User function Template for C++

void rotate(int arr[], int n)
{
    reverse(arr,arr+(n-1));
    reverse(arr+(n-1),arr+n);
    reverse(arr,arr+n);
}

//Here we are doing one rotation to right ,but lets say we have to do the right roatation by k so we need to replace 1 by k here.
//The other approach is to make another array and do arr[(i+k)%n]=arr[i];