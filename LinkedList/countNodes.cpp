class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        if(head==NULL) return 0;
        if(head->next==NULL) return 1;
        
    Node*temp=head; int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
    
    }
};
