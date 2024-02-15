#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
       
       //Approach-1 -Use extra space for storing the string with all the alphanumeric characters
       //Approach-2 -Modify the string inplace with the alpanumeric characters in the beginning and then check for palindrome.

       int n=s.size(); 
       int start=0;
       int end=n-1;
       

       for(int i=0;i<n;i++)
       {
           if(s[i]>='A' && s[i]<='Z')
           {
               s[i]=s[i]-'A'+'a';
           }
       }

       while(start<end)
       {
           char ch1=s[start];
           char ch2=s[end];

           if(!((ch1>='a' && ch1<='z') || (ch1>='0' && ch1<='9')))
           {
               start++;
               continue;
           }


           if(!((ch2>='a' && ch2<='z') || (ch2>='0' && ch2<='9')))
           {
               end--;
               continue;
           }

           if(ch1!=ch2)
           {
               return false;
           }

           start++;
           end--;
       }

       return true;

    }
};