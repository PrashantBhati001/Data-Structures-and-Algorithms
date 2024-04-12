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

    pair<bool,int> advancebalance(TreeNode * root)
    {

        if(root== NULL)
        {
            pair<bool,int> p={true,0};
            return p;
        }

        pair<bool,int> left=advancebalance(root->left);
        pair<bool,int> right=advancebalance(root->right);

        pair<bool,int> ans;

        ans.second=1+max(left.second,right.second);

        bool diff=abs(left.second-right.second)<=1;

        if(left.first && right.first && diff)
        {
            ans.first=true;
        }
        else
        {
            ans.first=false;
        }

        return ans;

    }
    bool isBalanced(TreeNode* root) {

        return advancebalance(root).first;
        
    }
};



//O(N^2) approach

// class Solution {
// public:

//    int height(TreeNode * root)
//    {
//     if(root==NULL)
//     {
//         return 0;
//     }

//     return 1+max(height(root->left),height(root->right));

//    }
//     bool isBalanced(TreeNode* root) {

//         if(root==NULL)
//         {
//             return true;
//         }

//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);



//         int leftheight=height(root->left);
//         int rightheight=height(root->right);

//         if(abs(leftheight-rightheight)<=1)
//         {
//             return left && right;
//         }
//         else
//         {
//             return false;
//         }


//         return left && right;

       

        
        
//     }
// };