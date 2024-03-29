//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {


        //Approach-1//
        //Call rotate by 90 degree twice
        //Approach-2 
        
        int row=matrix.size();
        int col=row;
        
        for(int i=0;i<row;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        
        for(int i=0;i<row;i++)
        {
            int start=0;
            int end=row-1;
        
            while(start<end)
            {
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
            
        }
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends