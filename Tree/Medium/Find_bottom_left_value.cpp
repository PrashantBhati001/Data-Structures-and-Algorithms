#include <bits/stdc++.h>
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
    int findBottomLeftValue(TreeNode* root) {

        int ans=root->val;
        queue<TreeNode *> q;

        q.push(root);
        q.push(NULL);
        bool flag=false;

        while(!q.empty())
        {
            TreeNode * temp=q.front();
            q.pop();

            if(temp==NULL)
            {

                flag=false;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if(flag==false)
                {
                    ans=temp->val;
                    flag=true;
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }

        return ans;


        
    }
};