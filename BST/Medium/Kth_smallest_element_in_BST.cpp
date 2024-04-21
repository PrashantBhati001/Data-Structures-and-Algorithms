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
    void findanswer(TreeNode * root,int &k,int &ans,bool &flag)
    {
        if(root==NULL)
        {
            return ;
        }

        findanswer(root->left,k,ans,flag);
        if(k>0)
        {
            k--;
        }

        if(k==0)
        {
            if(flag==false)
            {
                ans=root->val;
                flag=true;
            }
            
            return;
        }

        findanswer(root->right,k,ans,flag);

    }

    int kthSmallest(TreeNode* root, int k) {

        int ans=0;
        bool flag=false;
        findanswer(root,k,ans,flag);
        return ans;
        
    }
};