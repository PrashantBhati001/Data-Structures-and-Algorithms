//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void TOH(int N,int source,int help,int dest)
{
    if(N==1)
    {
        cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<dest<<endl;
        return;
    }
    
    TOH(N-1,source,dest,help);
    cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<dest<<endl;
    TOH(N-1,help,source,dest);
    
    
}
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        
        TOH(N,from,aux,to);
    
        return pow(2,N)-1;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends