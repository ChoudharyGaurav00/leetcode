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
bool ans;
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
      ans=false;  
        int cur=0;
     inorder(root,targetSum,cur);
     return ans;   
    }
    
    void inorder(TreeNode* root,int &targetSum , int cur)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->left==nullptr&&root->right==nullptr)
        {
            if(cur+root->val==targetSum) ans=true;
            return;
        }
        else
        {
            inorder(root->left,targetSum,cur+root->val);
            inorder(root->right,targetSum,cur+root->val);
        }
    }
};