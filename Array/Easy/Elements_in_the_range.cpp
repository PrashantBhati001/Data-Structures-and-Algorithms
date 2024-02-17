//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		

       // 1.Sort the array and then drive the solution in one pass of the array.
    //    for(int i=0;i<n;i++)
    //    {
    //       if(arr[i]==A)
    //       {
    //         A++;
    //       }
    //    }

    //    if(A>B)
    //    {
    //     return true;
    //    }

    //    return false;

    //2.Use hashmap
    // unordered_map<int,int> m;
    // for(int i=0;i<n;i++)
    // {
    //     m[arr[i]]++;
    // }

    // for(int i=A;i<=B;i++)
    // {
    //     if(m.find(i)==m.end())
    //     {
    //         return false;
    //     }
    // }

    // return true;

    // 3.This approach solves the problem in O(N) time complexity and in O(1) space.

    for(int i=0;i<n;i++)
		{
		    int val=abs(arr[i]);
		    
		    if(val>=A && val<=B)
		    {
		        int index=val-A;
		        if(index<n)
		        {
		            if(arr[index]>0)
		            {
		                arr[index]=-arr[index];
		            }
		            
		        }
		    }
		}
		
		int count=0;
		for(int i=0;i<n;i++)
		{
		    if(arr[i]<0)
		    {
		        count++;
		    }
		}
		
		if(count==B-A+1)
		{
		    return true;
		}
		
		return false;
		
	}


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends