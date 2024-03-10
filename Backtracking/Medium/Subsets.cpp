//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void subsequence(vector<int> &A,int index,int n,vector<vector<int> > &ans,vector<int> &temp)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        
        subsequence(A,index+1,n,ans,temp);
        temp.push_back(A[index]);
        subsequence(A,index+1,n,ans,temp);
        temp.pop_back();
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        
        int n=A.size();
        vector<vector<int> > ans;
        vector<int> temp;
        subsequence(A,0,n,ans,temp);
        sort(ans.begin(),ans.end());//The reason for sorting is they want the ans in lexicographically sorted way.
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends