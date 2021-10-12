class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        if(head==NULL) return 0;
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    
    }
};
   
