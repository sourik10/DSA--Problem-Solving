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
//diamter - length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
//time complexity O(n)
//space complexity O(n)
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
    int height(TreeNode* root,int &diameter){
        if(root==NULL) return 0;
        int left=height(root->left,diameter);
        int right=height(root->right,diameter);
        diameter=max(diameter,left+right);
        return 1+max(left,right);
    }
};

