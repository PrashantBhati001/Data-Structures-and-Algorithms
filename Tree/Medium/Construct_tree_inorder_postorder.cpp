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

    int find(vector<int>& inorder,int start,int end,int target)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
            {
                return i;
            }
        }

        return -1;
    }

    TreeNode * Tree(vector<int>& inorder, vector<int>& postorder,int instart,int inend,int index,int size)
    {
        if(index>=size || instart>inend)
        {
            return NULL;
        }

        TreeNode * root=new TreeNode(postorder[index]);

        int pos=find(inorder,instart,inend,postorder[index]);

        root->right=Tree(inorder,postorder,pos+1,inend,index-1,size);
        root->left=Tree(inorder,postorder,instart,pos-1,index-(inend-pos)-1,size);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int n=inorder.size();

         return Tree(inorder,postorder,0,n-1,n-1,n);
        
    }
};