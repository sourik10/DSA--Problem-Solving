class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {

    Node* temp=new Node(x);
    temp->next=head;
    return temp;
	
}

    
 //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* t=new Node(x);
	if(head==NULL) return t; //no node present
	Node* curr=head;
	while(curr->next!=NULL){
	    curr=curr->next;
	}
	    curr->next=t;
	    return head; }
};
