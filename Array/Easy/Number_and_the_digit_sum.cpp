//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    
        int sumofdigits(int n)
        {
            int sum=0;
            while(n)
            {
                int digit=n%10;
                sum=sum+digit;
                n=n/10;
            }
            
            return sum;
        }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            int cnt=0;
            for(int i=1;i<=N;i++)
            {
                int sum=sumofdigits(i);
                if((i-sum)>=K)
                {
                    cnt++;
                }
            }
            
            
            return cnt;
        }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends