#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};

//search-recursive code
bool search(node* root,int x){
    if(root==NULL) return false;
    if(root->data==x) return true;
    else if(root->data > x){
        search(root->left,x);
    }
    else{
        search(root->right,x);
    }
}

//search-iterative code
bool searchIterative(node* root,int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data > x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}

node insert(node* root,int x){
    if(root==NULL){
        return new node(x);
    }
    if(root->data > x){
        root->left=insert(root->left,x);
    }
    else if(root->data < x){
        root->right=insert(root->right,x);
    }
    return root;
}

void inorder(node* root){
    while(root!=NULL){
        inorder(root->left);
        cout<<root->data<<"->";
        inorder(root->right);
    }
}

void preorder(node* root){
    while(root!=NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root){
    while(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<
    }
}

int main() {
  node* root=new node(15); //rootElement
  
  //left-subtree
  root->left=new node(5);
  root->left->left=new node(3);
  
  //right-subtree
  root->right=new node(20);
  root->right->left=new node(18);
  root->right->right=new node(80);
  root->right->left->left=new node(16);
  
  int x;//ellemnt to search
  cin>>x;
  if(search(root,x)){
      cout<<"found"<<endl;
  }
  else cout<<"not found"<<endl;
  insert(root,10); 
  
}
