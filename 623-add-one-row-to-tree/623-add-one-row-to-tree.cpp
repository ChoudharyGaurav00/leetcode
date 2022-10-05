/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void func(TreeNode* root,int level,TreeNode*prev,int depth,int val,bool left)
    {
        
        
        if(level==depth)
        {
           auto trn= new TreeNode(val);
           if(left)
           {
               prev->left=trn;
               trn->left=root;
               return;
           }
          else
          {
              prev->right=trn;
              trn->right=root;
              return;
          }
        
        }
        if(root==nullptr) return;
        
        func(root->left,level+1,root,depth,val,true);
        func(root->right,level+1,root,depth,val,false);
        
        
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            auto trn= new TreeNode(val);
            trn->left=root;
            return trn;
        }
        else{
        func(root->left,2,root,depth,val,true);
        func(root->right,2,root,depth,val,false);
        }
        return root;
            
    }
};