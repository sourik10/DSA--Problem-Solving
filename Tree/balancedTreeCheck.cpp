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
//time complexity O(n)
//space complexity O(n)
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkBalanced(root)!=-1;
    }
    int checkBalanced(TreeNode* root){
        if(root==NULL) return 0;
        
        int left=checkBalanced(root->left);
        if(left==-1) return -1;
        int right=checkBalanced(root->right);
        if(right==-1) return -1;
        if(abs(left-right)>1) return -1;    //unbalanced tree condition 
        return 1+max(left,right);
    }
};
