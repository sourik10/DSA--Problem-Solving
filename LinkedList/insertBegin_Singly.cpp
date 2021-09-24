Node* insertInMiddle(Node* head, int x)
{
	if(head==NULL) head=new Node(x);  //no node present
	else{
	    Node* n=new Node(x);
	    Node* t=head;
	    int c=0;
	    while(t!=NULL){
	        c++;
	        t=t->next;
	    }
	    int count=((c%2)==0)?(c/2):((c+1)/2);
	    t=head;
	    while(count-->2)  t=t->next;
	    n->next=t->next;
	    t->next=n;

	}
}
