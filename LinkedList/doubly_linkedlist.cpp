//Implementation of Doubly LinkedList

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }cout<<endl;
}



Node *insertBegin(Node *head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL)head->prev=temp;

    return temp;
    
}

Node* insertEnd(Node* head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        return temp;
    }

    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;

    return head;
}

Node* deleteBegin(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    else{
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

Node* deleteEnd(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;

    return head;

}

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);

    //link b/w 1st and 2nd Node
	head->next=temp1;
	temp1->prev=head;
	
    //link b/w 2ND Node
    temp1->next=temp2;
	temp2->prev=temp1;
	printlist(head);


    head=insertBegin(head,40);
    printlist(head);

    head=insertEnd(head,50);
    printlist(head);

    head=deleteBegin(head);
    printlist(head);


    head=deleteEnd(head);
    printlist(head);




} 
