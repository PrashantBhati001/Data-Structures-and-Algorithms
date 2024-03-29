//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    vector<int> v(26,0);
    int cnt=0;
    for(int i=0;i<str1.size();i++)
    {
        int pos=str1[i]-'a';
        v[pos]++;
    }
    
    for(int i=0;i<str2.size();i++)
    {
        int pos=str2[i]-'a';
        v[pos]--;
    }
    
    for(int i=0;i<26;i++)
    {
        if(v[i]>0)
        {
            cnt=cnt+v[i];
        }
        else if(v[i]<0)
        {
            cnt=cnt+abs(v[i]);
        }
    }
    
    return cnt;
}