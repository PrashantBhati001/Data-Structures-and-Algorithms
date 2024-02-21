//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        
        int n1=X.size();
        int n2=Y.size();

        reverse(X.begin(),X.end());
        reverse(Y.begin(),Y.end());
        string res="";

        int carry=0;
        int i=0;
        int j=0;

        while(i<n1 && j<n2)
        {
            int digit1=X[i]-'0';
            int digit2=Y[j]-'0';

            int sum=digit1+digit2+carry;
            int digit=sum%10;
           // ans.push_back(digit);
            res=res+to_string(digit);
            carry=sum/10;
            i++;
            j++;

        }

        while(i<n1)
        {
            int digit1=X[i]-'0';
            int sum=digit1+carry;
            int digit=sum%10;
           // ans.push_back(digit);
           res=res+to_string(digit);
            carry=sum/10;
            i++;
        }

        while(j<n2)
        {
            int digit2=Y[j]-'0';
            int sum=digit2+carry;
            int digit=sum%10;
            //ans.push_back(digit);
            res=res+to_string(digit);
            carry=sum/10;
            j++;
        }

        while(carry)
        {
            int digit=carry%10;
            //ans.push_back(digit);
            res=res+to_string(digit);
            carry=carry/10;
        }

       reverse(res.begin(),res.end());
       
       int k=0;
       while(k<res.size())
       {
           if(res[k]=='0')
           {
               k++;
           }
           
           else
           {
               break;
           }
       }
       
       if(k<res.size())
       {
           return res.substr(k,res.size()-k);
       }
       
       return "0";
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends