int countNode(Node* head){
    int c=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}

Node* insertInMiddle(Node* head, int x)
{
    Node* ptr=head;
    Node* n=new Node(x);
	int len=countNode(head);
	int count=(len%2==0)? (len/2) : (len+1)/2;
	while(count-- >1){
	    ptr=ptr->next;
	}
	n->next=ptr->next;
	ptr->next=n;
	
	return head;
	
}
