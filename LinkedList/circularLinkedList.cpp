#include<bits/stdc++.h>
using namespace std;

/*	
	Implement of Circular Linked List---singly
	head->next=head
*/
struct Node{

	int data;
	Node* next;

	Node(int d){
		data=d;
		next=NULL;
	}

};

void printList(Node* head){
	if(head==NULL) return;
	cout<<head->data<<"->";
	
	for(Node* p=head->next;p!=head;p=p->next){
		cout<<p->data<<"->";
	}
	cout<<endl;

}

Node *insertBeginEff(Node * head,int x){  	//efficient approach in O(1) time
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}

Node* insertBegin(Node* head,int val){  //naive-approach in O(n) time
	Node* temp=new Node(val);
	if(head==NULL){ 		//no element present in list
		temp->next=temp;
		return temp;
	}
	Node* curr=head;
	while(curr->next!=head){
		curr=curr->next;
	}
	curr->next=temp;
	temp->next=head;

	return temp;

}

Node *insertEnd(Node *head,int x){   //naive approach in O(n) time
    Node *temp=new Node(x); 
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

Node* deleteBegin(Node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}



int main(){

	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);

	//linking 
	head->next->next->next->next=head;
	printList(head);

	head=insertBegin(head,50);
	printList(head);

	head=insertBeginEff(head,60);
	printList(head);

	head=deleteBegin(head);
	printList(head);

	
}
