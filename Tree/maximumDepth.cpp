//time complexity O(n)
//space complexity O(n)
/*
*
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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
    }
};


//levelOrderTraversal approach
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int dp=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int size=q.size(); dp++;
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            } 
        } return dp;
    }
};
