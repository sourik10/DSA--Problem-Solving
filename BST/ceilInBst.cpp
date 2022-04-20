/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int x){
  
	//Ceil of an integer is the closest integer greater than or equal to a given number.
	int ceil=-1;
	while(node!=NULL){
    if(node->data==x){
		ceil=node->data;
		return ceil;
	}
	if(node->data<x){
		node=node->right;
	}
	else{
		ceil=node->data;
		node=node->left;
	}
	}
	return ceil;
}
