//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    
    int magic(int * arrnew,int size)
    {
        int i;
        for(i=0;i<size;i++)
        {
            int pos=abs(arrnew[i])-1;
            if(pos<size && arrnew[pos]>0)
            {
                arrnew[pos]=-arrnew[pos];
            }
        }
        
        for(i=0;i<size;i++)
        {
            if(arrnew[i]>0)
            {
                return i+1;
            }
        }
        
        return i+1;
    }
    
    int missingNumber(int arr[], int n) 
    { 
        
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                swap(arr[index],arr[i]);
                index++;
            }
        }
        if(index>=n)
        {
            return 1;           
        }
        
        int new_size=n-index;
        
        return magic(arr+index,new_size);




        //Approach 2
        // sort(arr,arr+n);
        // int count=1;
        
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]>0)
        //     {
        //         if(arr[i]==count)
        //         {
        //             count++;
        //             while(i<n && arr[i+1]==arr[i])
        //             {
        //                 i++;
        //             }
        //         }
                
        //         else
        //         {
        //             return count;
        //         }
        //     }
            
        // }
        
        // return count;
        
        
    } 
};


//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends