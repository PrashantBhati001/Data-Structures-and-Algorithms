//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        
        int oddremovemask=0xAAAAAAAA;
        int evenremovemask=0x55555555;
        
        int oddafterremoving=oddremovemask & n;
        int evenafterremoving=evenremovemask & n;
        
        
        oddafterremoving=oddafterremoving>>1;
        evenafterremoving=evenafterremoving<<1;
        
        return oddafterremoving | evenafterremoving;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends