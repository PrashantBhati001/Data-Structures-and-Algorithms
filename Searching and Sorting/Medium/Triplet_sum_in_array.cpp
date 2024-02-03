//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here

        //Approach-1 O(N^3)-time complexity
        //Use three  for loop 

        //Approach-2 O(N^2log(N))
        //Sort the array
        //Use two for loop  and for the third element use binary search in the remaining space.

        //Approach-3 O(NlogN+N^2)

        sort(A,A+n);

        for(int i=0;i<n;i++)
        {
            int target=X-A[i];
            
            int start=i+1;
            int end=n-1;

            while(start<end)
            {
                int sum=A[start]+A[end];
                if(sum==target)
                {
                    return 1;
                }
                else if(sum>target)
                {
                    end--;
                }
                else{
                    start++;
                }
            }
        }

        return 0;

    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends