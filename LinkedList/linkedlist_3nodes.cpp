#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }

};

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    
    node* temp=head;
    while(temp!=NULL){
    	cout<<temp->data<<"->";
    	temp=temp->next;
	}
	


}
