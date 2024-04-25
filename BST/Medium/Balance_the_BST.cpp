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

    TreeNode * findanswer(vector<int> & temp,int low,int high)
    {

        if(low>high)
        {
            return NULL;
        }

        int mid=low+(high-low)/2;

        TreeNode * root=new TreeNode(temp[mid]);
        root->left=findanswer(temp,low,mid-1);
        root->right=findanswer(temp,mid+1,high);

        return root;

    }

    void inorder(TreeNode * root,vector<int> & temp)
    {
        if(root==NULL)
        {
            return;
        }

        inorder(root->left,temp);
        temp.push_back(root->val);
        inorder(root->right,temp);
    }
    TreeNode* balanceBST(TreeNode* root) {

        if(root==NULL)
        {
            return NULL;
        }
        vector<int> temp;

        inorder(root,temp);

        return findanswer(temp,0,temp.size()-1);    
        
    }
};