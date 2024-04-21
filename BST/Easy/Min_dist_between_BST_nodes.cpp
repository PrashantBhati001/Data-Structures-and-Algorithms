#include<bits/stdc++.h>
using namespace std;

 // Definition for a binary tree node.
  struct TreeNode {
      int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    void findanswer(TreeNode * root,int &prev,int &ans)
    {
        if(root==NULL)
        {
            return;
        }

        findanswer(root->left,prev,ans);
        if(prev!=INT_MIN)
        {
            ans=min(ans,root->val-prev);
        }

        prev=root->val;
        findanswer(root->right,prev,ans);
    }
    int minDiffInBST(TreeNode* root) {

        int prev=INT_MIN;
        int ans=INT_MAX;
        findanswer(root,prev,ans);
        return ans;
        
    }
};