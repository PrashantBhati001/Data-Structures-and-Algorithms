#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> &nums,int target)
{
      //Approach1 O(N^3)*log(No of unique triplets)-time complexity
      //O(No of unique triplets)--space complexity

    //   set<vector<int>> s;
         int n=nums.size();

    //   for(int i=0;i<n;i++)
    //   {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         for(int k=j+1;k<n;k++)
    //         {
    //             if(nums[i]+nums[j]+nums[k]==target)
    //             {
    //                 vector<int> temp={nums[i],nums[j],nums[k]};
    //                 sort(temp.begin(),temp.end());
    //                 s.insert(temp);
    //             }
    //         }
    //     }
    //   }

    //   vector<vector<int>> ans(s.begin(),s.end());
    //   return ans;


    // Approach 2  O(N^2)*O(No of unique triplets)*O(logN)--time complexity
    //             O(N)+O(No of unique triplets)

    // set<vector<int>> s;
    // for(int i=0;i<n;i++)
    // {
    //     set<int> hashset;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         int X=target-(nums[i]+nums[j]);

    //         if(hashset.find(X)!=hashset.end())
    //         {
    //                 vector<int> temp={nums[i],nums[j],X};
    //                 sort(temp.begin(),temp.end());
    //                 s.insert(temp);
    //         }
    //         hashset.insert(nums[j]);

    //     }

    // }

    // vector<vector<int>> ans(s.begin(),s.end());
    // return ans;

    //Approach 3 O(NlogN)+O(N^2)--time complexity

    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        int X=target-nums[i];
        int start=i+1;
        int end=n-1;

        while(start<end)
        {
            int sum=nums[start]+nums[end];
            if(sum>X)
            {
                end--;
            }
            else if(sum<X)
            {
                start++;
            }
            else{

                vector<int> v(3,0);
                v[0]=nums[i];
                v[1]=nums[start];
                v[2]=nums[end];
                ans.push_back(v);

                while(start<end && nums[start]==v[1])
                {
                    start++;
                } 

                while(start<end && nums[end]==v[2])
                {
                    end--;
                }

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
    vector<vector<int>> result=threesum(nums,target);
    return 0;
}