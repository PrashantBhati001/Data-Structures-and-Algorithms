//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {


        //Approach-1

        //Find all the subarray and fine the sum of all of them and check if the sum is equal to the required target.

        //Approach-2 
        //The below is the mao approach for the negative elements as well as for positive elements.
        unordered_map<long long int,int> m;
        vector<int> ans;
        m[0]=-1;
        long long int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            long long int target=sum-s;
            if(m.find(target)!=m.end())
            {
                ans.push_back(m[target]+1+1);
                ans.push_back(i+1);
                return ans;
            }
            else
            {
                m[sum]=i;
            }
            
        }
        
        ans.push_back(-1);
        return ans;

       //Approach-3
       vector<int> ans;
       int start=0;
       int end=0;
       long long  sum=0;
       
       while(end<n)
       {
           sum=sum+arr[end];
           
           while(sum>s && start<end)
           {
               sum=sum-arr[start];
               start++;
           }
           
           if(sum==s)
           {
               ans.push_back(start+1);
               ans.push_back(end+1);
               return ans;
           }
           end++;
           
       }
       
       ans.push_back(-1);
       return ans;
       
       
       
       
       
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends