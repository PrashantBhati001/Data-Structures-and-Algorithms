//{ Driver Code Starts
// C++ program to find sum of digits in factorial
// of a number
#include <bits/stdc++.h>
using namespace std;

// Function to multiply x with large number
// stored in vector v. Result is stored in v.
void multiply(vector<long long int> &v, long long int x);

// Returns sum of digits in n!
long long int findSumOfDigits(long long int n);

// Driver code
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout << findSumOfDigits(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*Complete the function below*/
// Returns sum of digits in n!
long long int findSumOfDigits(long long int n)
{

     long long int ans=0;
     
     vector<int> res;
     res.push_back(1);
     
     for(int i=2;i<=n;i++)
     {
         int carry=0;
         for(int j=0;j<res.size();j++)
         {
             int temp=res[j]*i+carry;
             int digit=temp%10;
             res[j]=digit;
             carry=temp/10;
         }
         
         while(carry)
         {
             int digit=carry%10;
             res.push_back(digit);
             carry=carry/10;
         }
         
         
     }
     
     for(int i=0;i<res.size();i++)
     {
         ans=ans+res[i];
     }
     
     return ans;

}