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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>res; //2d matrix(rowwise print)
        if(root==NULL){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* tr=q.front();
                q.pop();
                level.push_back(tr->val);
                if(tr->left!=NULL) q.push(tr->left);
                if(tr->right!=NULL) q.push(tr->right);
            }
            res.push_back(level);
        }
        return res;
    }
};
