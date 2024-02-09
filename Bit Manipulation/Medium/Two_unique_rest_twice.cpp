//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        
        vector<int> v;
        int rsbm=0;
        int xy=0;
        for(int i=0;i<nums.size();i++)
        {
            xy=xy^nums[i];
        }
        
        rsbm=((xy) & (-xy));
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(rsbm & nums[i])
            {
                x=x^nums[i];
            }
            else
            {
                y=y^nums[i];
            }
        }
        
        
        if(x>y){
            v.push_back(y);
            v.push_back(x);
        }
        else
        {
            v.push_back(x);
            v.push_back(y);
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends