#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;

    Node(int d){
        data=d;
        next=NULL;
    }

};

//print a LinkedList
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

//recursivly printing a LInkedList
void printListR(Node* head){
    if(head==NULL) return;
    cout<<head->data<<"->";
    return printListR(head->next);
}

Node* insertBegin(Node* head,int val){
    Node* t=new Node(val);
    t->next=head;
    return t;
}

Node* insertLast(Node* head,int val){
    Node*t =new Node(val);
    if(head==NULL){
        return t;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=t;
    return head;

}

Node* deleteBegin(Node* head){
    if(head==NULL){  //no node present
        return NULL;
    }
    Node* t=head->next;
    delete(head);
    return t;
}

Node* deleteLast(Node* head){
    if(head==NULL){     //no node present
        return NULL;
    }
    if(head->next==NULL){   //only 1node preesent
        delete(head);
        return NULL;
    }

    Node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;

}

Node* insertPos(Node* head,int pos,int val){
    Node* t=new Node(val);


    //inserting at 1st position
    if(pos==1){
        t->next=head;
        return t;
    }

    Node* curr=head;
    for(int i=1;i<=pos-2 and curr!=NULL;i++){
        curr=curr->next;
    }

    //position> size+1  ---->curr=NULL
    if(curr==NULL){
        return head;
    }

    t->next=curr->next;
    curr->next=t;
    return head;

}

int searchList(Node* head,int x){       //-1 -->element not present
    int pos=1;
    Node* t=head;
    while(t!=NULL){
        if(t->data==x){
            return pos;
        }
        else{
            t=t->next;
            pos++;
        }
    }
    return -1;
}

/*
int searchListRE(Node* head,int x){

    //no element present in LInked list
    if(head==NULL){
        return -1;
    }
    //first position
    if(head->next==x){
        return 1;
    }
    else{
        int res=searchListRE(head->next,x);
        if(res=-1) return -1;
        else{
            return res+1;
        }
    }

}
*/

int main(){

    //LinkedList with 3nodes
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head=insertBegin(head,40);
    head=insertLast(head,50);

    printList(head);
    cout<<endl;

    insertPos(head,3,55);
    printList(head);
    cout<<endl;

    cout<<"30 present at "<<searchList(head,30)<<endl;
    cout<<"70 present at "<<searchList(head,70)<<endl;

    head=deleteBegin(head);
    printListR(head);
    cout<<endl;

    head=deleteLast(head);
    printList(head);

}
