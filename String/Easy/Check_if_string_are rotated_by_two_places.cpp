//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        
        int k1=2;
        int k2=4;
        
        int n1=str1.size();
        int n2=str2.size();
        
        k1=k1%n1;
        
        if(n1!=n2)
        {
            return false;
        }
        
        reverse(str1.begin(),str1.begin()+k1);
        reverse(str1.begin()+k1,str1.end());
        reverse(str1.begin(),str1.end());
        
        if(str1==str2)
        {
            return true;
        }
        
        
        k2=k2%n1;
        reverse(str1.begin(),str1.begin()+n1-k2);
        reverse(str1.begin()+n1-k2,str1.end());
        reverse(str1.begin(),str1.end());
        
        if(str1==str2)
        {
            return true;
        }
        
        return false;
          
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends