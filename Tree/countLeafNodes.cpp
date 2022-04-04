//https://www.geeksforgeeks.org/write-a-c-program-to-get-count-of-leaf-nodes-in-a-binary-tree/
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root){
   if (root == NULL) {
        return 0;
    }

    if (root -> left == NULL && root -> right == NULL) {
        return 1;
    } else {
        int count = 0;
        count = noOfLeafNodes(root -> left) + noOfLeafNodes(root -> right);
        return count;
    }
}
