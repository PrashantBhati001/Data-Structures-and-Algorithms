//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        
    int count=0;
    int candi=0;
    int res=size/2;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            candi=a[i];
        }
        if(a[i]==candi)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==candi)
        {
            count++;
        }
    }
    if(count>res)
    {
        return candi;
    }
    else
    {
    return -1;
    }   
}


//{ Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}

// } Driver Code Ends