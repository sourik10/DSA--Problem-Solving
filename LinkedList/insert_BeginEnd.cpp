class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* t=new Node(x);
       t->next=head;
       head=t;
       
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* t=new Node(x);
       if(head==NULL) return t;
       Node* curr=head;
       while(curr->next!=NULL){
           curr=curr->next;
       }
       curr->next=t;
       
       
       return head;
    }
};
