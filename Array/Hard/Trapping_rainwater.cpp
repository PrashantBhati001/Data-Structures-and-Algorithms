//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){

        //Approach 1 O(N^2)-time complexity  O(1)--space complexity

        // int leftmax=0;
        // int rightmax=0;
        // int water=0;

        // for(int i=1;i<n-1;i++)
        // {
        //     leftmax=arr[i];

        //     for(int j=0;j<i;j++)
        //     {
        //         leftmax=max(leftmax,arr[j]);
        //     }

        //     rightmax=arr[i];

        //     for(int j=i+1;j<n;j++)
        //     {
        //         rightmax=max(rightmax,arr[j]);
        //     }

        //     water=water+(min(leftmax,rightmax)-arr[i]);
        // }

        // return water;


        //Approach-2 O(N)-time complexity O(N)-space complexity

        // vector<int> left(n,0);
        // vector<int> right(n,0);
        // int water=0;
        
        // for(int i=1;i<n;i++)
        // {
        //     left[i]=max(left[i-1],arr[i-1]);
        // }

        // for(int i=n-2;i>=0;i--)
        // {
        //     right[i]=max(right[i+1],arr[i+1]);
        // }

        // for(int i=1;i<n-1;i++)
        // {
        //     int minheight=min(left[i],right[i]);
        //     if(minheight>arr[i])
        //     {
        //         water+=minheight-arr[i];
        //     }
        // }

        // return water;

        //Approach-3 O(N)-time complexity O(1)-space compexity

              long long int water=0;
        
        int leftmax=0;
        int rightmax=0;
        
        int maxheight=arr[0];
        int index=0;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>maxheight)
            {
                maxheight=arr[i];
                index=i;
            }
        }
        
        for(int i=0;i<index;i++)
        {
            if(leftmax>arr[i])
            {
                water=water+(leftmax-arr[i]);
            }
            else
            {
                leftmax=arr[i];
            }
        }
        
        for(int i=n-1;i>index;i--)
        {
            
            if(rightmax>arr[i])
            {
                water=water+(rightmax-arr[i]);
            }
            else
            {
                rightmax=arr[i];
            }
    
        }
        
        
        return water;

              
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends