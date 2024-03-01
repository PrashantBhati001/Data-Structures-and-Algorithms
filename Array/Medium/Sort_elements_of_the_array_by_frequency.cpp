//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    
    static bool cmp(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        
        return a.second>b.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        vector<pair<int,int>> v;
        unordered_map<int,int> m;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],m[arr[i]]});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto i:v)
        {
            ans.push_back(i.first);
        }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends