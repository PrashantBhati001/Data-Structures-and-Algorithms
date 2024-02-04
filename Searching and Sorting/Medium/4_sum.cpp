#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> &nums,int target)
{
  //Approach-1 O(N^4)--time complexity
  //Use 4 for loop and use set data structure.
  //Approach-2  O(N^3)--time complexity
  //Same as 3 sum Approach

vector<vector<int>> ans;
int n=nums.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        int X=target-(nums[i]+nums[j]);

        int start=j+1;
        int end=n-1;

        while(start<end)
        {
            int sum=nums[start]+nums[end];
            if(sum<X)
            {
                start++;
            }
            else if(sum>X)
            {
                end--;
            }
            else{
                vector<int> v(4,0);
                v[0]=nums[i];
                v[1]=nums[j];
                v[2]=nums[start];
                v[3]=nums[end];
                ans.push_back(v);

                while(start<end && nums[start]==nums[2])
                {
                    start++;
                }

                while(start<end && nums[end]==nums[3])
                {
                    end--;
                }
            }
        }

        while(j+1<n && nums[j+1]==nums[j])
        {
            j++;
        }
    }

    while(i+1<n && nums[i+1]==nums[i])
    {
        i++;
    }
}

return ans;


}

int main()
{

    vector<int> nums={1,2,3,4,5,6};
    int target=6;
    vector<vector<int>> result=foursum(nums,target);
    return 0;
}