//Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
      Node* t=del->next;
      del->data=del->next->data;
      del->next=del->next->next;
      
      free(t);
    }
