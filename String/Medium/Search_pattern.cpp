//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
       void lprefixsuffix(vector<int> &lps,string pat)
       {
           int pre=0;
           int suff=1;
           
           while(suff<pat.size())
           {
               if(pat[pre]==pat[suff])
               {
                   lps[suff]=pre+1;
                   suff++;
                   pre++;
               }
               else
               {
                   if(pre==0)
                   {
                       lps[suff]=0;
                       suff++;
                   }
                   else
                   {
                       pre=lps[pre-1];
                   }
               }
           }
       }
        vector <int> search(string pat, string txt)
        {
            vector<int> ans;
            vector<int> lps(pat.size(),0);
            lprefixsuffix(lps,pat);
            int first=0;
            while(first<txt.size())
            {
                int second=0;
                while(first<txt.size() && second<pat.size())
                {
                    if(txt[first]==pat[second])
                    {
                        first++;
                        second++;
                    }
                    else
                    {
                        if(second==0)
                        {
                            first++;
                        }
                        else
                        {
                            second=lps[second-1];
                        }
                    }
                }
                
                if(second==pat.size())
                {
                    ans.push_back(first-second+1);
                    first=first-second+1;
                }
                else
                {
                    return ans;
                }
            }
            
            
            
            
                    
            
        }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends