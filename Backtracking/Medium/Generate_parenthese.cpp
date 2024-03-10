//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void generateparen(int n,int left,int right,vector<string> &ans,string &temp)
    {
        
        if(left+right==2*n)
        {
            ans.push_back(temp);
            return ;
        }
        if(left<n)
        {
            temp.push_back('(');
            generateparen(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        
        if(right<left)
        {
            temp.push_back(')');
            generateparen(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string temp;
        generateparen(n,0,0,ans,temp);
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
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends