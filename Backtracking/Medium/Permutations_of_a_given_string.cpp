//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    void permute( string &S,vector<string> &ans,int index)
	    {
	        if(index==S.size())
	        {
	            ans.push_back(S);
	            return ;
	        }
	        
	        unordered_map<char,int> m;
	        
	        for(int i=index;i<S.size();i++)
	        {
	            if(m.find(S[i])==m.end())
	            {
	                swap(S[i],S[index]);
	                permute(S,ans,index+1);
	                swap(S[i],S[index]);
	                m[S[i]]++;
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    permute(S,ans,0);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends