//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	   
	   map<int,int> m;
	   int index=0;
	   int count=0;
	   for(int i=0;i<nums.size();i++)
	   {
	       m[nums[i]]=i;
	   }
	   
	   for(auto i:m)
	   {
	       if(i.first!=nums[index])
	       {
	           
	           swap(nums[index],nums[i.second]);
	           m[nums[i.second]]=i.second;
	           count++;
	       }
	       index++;
	   }
	   
	   return count;
	   
	   
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends