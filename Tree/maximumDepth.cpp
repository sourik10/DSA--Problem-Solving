//recrusive approach to find height in a binary tree
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL) return 0;
        
        int lh=height(node->left);
        int rh=height(node->right);
        return 1+max(lh,rh);
    }
};

//maximum depth or height in a binary tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
       int depth=0;
       if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            depth++;
            TreeNode* temp=q.front();
            q.pop();
            for(int i=0;i<q.size();i++){
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
            }
        }return depth;
    }
};  
