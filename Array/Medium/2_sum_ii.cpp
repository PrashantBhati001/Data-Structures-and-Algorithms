#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int start=0;
        int end=numbers.size()-1;

        while(start<end)
        {

            int temp=numbers[start]+numbers[end];
            if(temp==target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }

            else if(temp>target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }


        return ans;
    }
};


int main()
{
    vector<int> v={2,4,5,7,9};
    Solution ob;
    vector<int> ans=ob.twoSum(v,6);
    return 0;
}
