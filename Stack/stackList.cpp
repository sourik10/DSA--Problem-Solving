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

struct Stack{
	node* head;
	int size;
	Stack(){
		head=NULL;
		size=0;
	}

void push(int dt){  //while push using linkedlist no chance of "stack overflow"
	node* temp=new node(dt);
	temp->next=head;
	head=temp;
	size++;
}

int pop(){
	if(head==NULL) cout<<"stack empty"<<endl;
	int v=head->data;
	node* temp=head;
	head=head->next;
	delete(temp);
	size--;
	return v;
}

int peek(){
	if(head==NULL) cout<<"stack is empty"<<endl;
	return head->data;
}

int sizeStack(){
	return size;
}

bool isEmpty(){
	return head=NULL;
}

void display(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

};

int main(){
	Stack abc;
	cout<<"size"<<abc.sizeStack()<<endl;
	abc.push(10); 
	abc.push(20);
	abc.push(30);
	abc.push(40);
	abc.display();
	cout<<endl;
	cout<<"size: "<<abc.sizeStack()<<endl;

	cout<<"popped value: "<<abc.pop()<<endl;
	cout<<"top val: "<<abc.peek()<<endl;
	cout<<abc.isEmpty()<<endl;
	

}
