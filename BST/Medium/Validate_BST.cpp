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

    bool validate(TreeNode * root,long min,long  max)
    {
        if(root==NULL)
        {
            return true;
        }
         
        if(root->val>min and root->val<max)
        {
            return (validate(root->left,min,root->val) and validate(root->right,root->val,max));
        }
        else
        {
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {

        return validate(root,LONG_MIN,LONG_MAX);
        
    }
};