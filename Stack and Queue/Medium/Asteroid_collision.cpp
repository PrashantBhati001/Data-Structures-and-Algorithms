
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int> & asteroids) {
        int n=asteroids.size();
        stack<int> st;
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(asteroids[i]);
            }
            else
            {
                int top=st.top();
                int curr=asteroids[i];

                if(top>0 and curr>0)
                {
                    st.push(curr);
                }
                else if(top<0 and curr<0)
                {
                    st.push(curr);
                }
                else
                {
                    int abstop=abs(st.top());
                    int abscurr=abs(curr);

                    if(st.top()>0 and curr<0)
                    {

                        if(abstop==abscurr)
                        {
                            st.pop();
                        }
                        else if(abstop>abscurr)
                        {
                            continue;
                        }
                        else
                        {
                            st.pop();
                            i--;
                        }

                    }
                    else
                    {
                        st.push(curr);
                    }

                    

                }

                
            }


        }

        if(st.empty())
        {
            return ans;
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;




        
    }
};