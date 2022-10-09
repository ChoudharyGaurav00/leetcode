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
    void traverse(TreeNode* root,vector<int>&inorder)
    {
        if(root==nullptr) return;
        traverse(root->left,inorder);
        inorder.push_back(root->val);
        traverse(root->right,inorder);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> vec;
        traverse(root,vec);
        
        int i=0;
        int r=vec.size()-1;
        bool ans=false;
        while(i<r)
        {
            int sum=vec[i]+vec[r];
            if(sum==k)
            {
                ans=true;
                break;
            }
            else if(sum>k)
            {
                r--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};