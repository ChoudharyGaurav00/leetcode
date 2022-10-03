/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void levelorder(Node* root,int lev,vector<vector<int>>&ans)
    {
        if(root==nullptr) return;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> thislevel;
            int tempsz=q.size();
            while(tempsz--)
            {
                auto tempnd=q.front();
                thislevel.push_back(tempnd->val);
                q.pop();
                for(auto x:tempnd->children)
                {
                    q.push(x);
                }
            }
            ans.push_back(thislevel);
            
        }
        
           
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        int lev=0;
        levelorder(root,0,ans);
        return ans;
    }
};