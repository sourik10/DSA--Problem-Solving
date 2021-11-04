#include <bits/stdc++.h>
using namespace std;

//creating nodes using struct
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

//recursive SearchOperation in BST
bool search(Node *root, int x){
    if(root==NULL)
        return false;
    if(root->key==x)
        return true;
    else if(root->key>x){
        return search(root->left,x);
    }else{
        return search(root->right,x);
    }
} 

//iterativeSearch in BST
bool searchIterative(Node *root, int x){
    while(root!=NULL){
        if(root->key==x)
            return true;
        else if(root->key>x)
            root=root->left;
        else // root-->key<x
            root=root->right;
    }
    return false;
} 

//recursiveInsert in BST
Node *insert(Node *root, int x){
    if(root==NULL)
        return new Node(x);
    if(root->key<x)
        root->right=insert(root->right,x);
    else if(root->key>x)
        root->left=insert(root->left,x);
    return root;
} 

//iterativeInsertOpeation in BST
Node *insertIterative(Node *root, int x){
    Node *temp=new Node(x);
    Node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 

//deleteOperation in BST
Node *getSuccessor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node *delNode(Node *root, int x){
    if(root==NULL)
        return root;
    if(root->key>x)
        root->left=delNode(root->left,x);
    else if(root->key<x)
        root->right=delNode(root->right,x);
    else{
        if(root->left==NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ=getSuccessor(root);
            root->key=succ->key;
            root->right=delNode(root->right,succ->key);
        }
    }
    return root;
}

//traversalTechnique---inorder,preorder,postorder traversal
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
} 
void preorder(Node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);    
    }
} 
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right); 
        cout<<root->key<<" ";   
    }
} 

Node *floor(Node *root, int x){
    Node *res=NULL;
    while(root!=NULL){ 
        if(root->key==x)
            return root;
        else if(root->key>x)
            root=root->left;
        else{
            res=root;
            root=root->right;
        }
    }
    return res;
} 

Node *ceil(Node *root, int x){
    Node *res=NULL;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key<x)
            root=root->right;
        else{
            res=root;
            root=root->left;
        }
    }
    return res;
} 


int main(){
    Node* root=new Node(20);
    root->left=new Node(15);
    root->right=new Node(25);
    root->left->left=new Node(14);
    root->left->right=new Node(18);

    /* 

            (20)--->rootKey
        (15)          (25)--->root->right
    (14)     (18)---->root->left->right
    
    */
    int x=21;
    if(search(root,x)){
        cout<<x<<" is found"<<endl;
    }
    else cout<<x<<" is not found"<<endl;


    int y=23;
    root=insert(root,y);
    if(search(root,y)){
        cout<<y<<" is found"<<endl;
    }
    else cout<<y<<" is not found"<<endl;

    int z=40;
    root=insertIterative(root,z);
    /* 

                       (20)--->rootKey
        (15)                         (25)
    (14)     (18)             (23)          (40)
    
                                     (37)
    */

    root=insert(root,37);
    inorder(root);
    cout<<endl;

    preorder(root);
    cout<<endl;

    postorder(root);
    cout<<endl;

    root=delNode(root,40);  //deleting rootNode 20 (having 2 children)
    cout<<"newRoot- "<<root->key<<endl;
    cout<<root->right->right->key; //40 is deleted(singleChild node)

    root=delNode(root,20);  //deleting rootNode 20 (having 2 children)
    cout<<endl<<"newRoot- "<<root->key<<endl;
   

    //floor in BST
    int f=26;
    cout<<"Floor of "<<f<<" "<<floor(root,f)->key<<endl;

    //ceil in BST
    int c=36;
    cout<<"ceil of "<<c<<" "<<ceil(root,c)->key<<endl;


}
