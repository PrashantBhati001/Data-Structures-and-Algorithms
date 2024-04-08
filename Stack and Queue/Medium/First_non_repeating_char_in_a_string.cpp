//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    string B="";
		    vector<int> repeated(26,0);
		    queue<char> q;
		    
		    for(int i=0;i<A.size();i++)
		    {
		        if(repeated[A[i]-'a']>=1)
		        {
		            repeated[A[i]-'a']++;
		            
		            while(!q.empty() && repeated[q.front()-'a']>1)
		            {
		                q.pop();
		            }
		            
		            if(q.empty())
		            {
		                B=B+'#';
		            }
		            else
		            {
		                B=B+q.front();
		            }
		        }
		        else
		        {
		            
		            repeated[A[i]-'a']++;
		            q.push(A[i]);
		            
		            while(repeated[q.front()-'a']>1)
		            {
		                q.pop();
		            }
		           
		            B=B+q.front();
		            
		            
		        }
		    }
		    
		    return B;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends