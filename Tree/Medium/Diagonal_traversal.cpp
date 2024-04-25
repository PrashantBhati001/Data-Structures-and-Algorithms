/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */




 
// vector<int> Solution::solve(TreeNode* root) {
    
//     vector<int> ans;
//      if(root==NULL)
//      {
//          return ans;
//      }
    
//     queue<TreeNode *> q;
//     q.push(root);
    
//     while(!q.empty())
//     {
//         TreeNode * temp=q.front();
//         q.pop();
        
//         while(temp)
//         {
//             if(temp->left)
//             {
//                 q.push(temp->left);
//             }
            
//             ans.push_back(temp->val);
//             temp=temp->right;
//         }
//     }
    
//     return ans;
    
    
// }
