//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
  long long   count=0;
    void merge(long long arr[],int p,int q,int r)
    {
        int n1=q-p+1;
        int n2=r-q;
        vector<long long > left(n1,0);
        vector<long long > right(n2,0);
        
        for(int i=0;i<n1;i++)
        {
            left[i]=arr[i+p];
        }
        
        for(int i=0;i<n2;i++)
        {
            right[i]=arr[i+q+1];
        }
        
        int k=p;
        int i=0;
        int j=0;
        
        while(i<n1 && j<n2)
        {
            
            if(left[i]<=right[j])
            {
                arr[k]=left[i];
                i++;
                k++;
            }
            else
            {
                count=count+n1-i;
                arr[k]=right[j];
                k++;
                j++;
                
            }
            
        }
        
        while(i<n1)
        {
            arr[k]=left[i];
            k++;
            i++;
        }
        
        while(j<n2)
        {
            arr[k]=right[j];
            k++;
            j++;
        }
        
        
        
    }
    
    void mergesort(long long arr[],int p,int r)
    {
        if(p<r)
        {
            int q=p+(r-p)/2;
            mergesort(arr,p,q);
            mergesort(arr,q+1,r);
            merge(arr,p,q,r);
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        
        mergesort(arr,0,N-1);
        
        return count;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends