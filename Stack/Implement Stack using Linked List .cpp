void MyStack ::push(int x) 
{
    StackNode* temp=new StackNode(x);
    temp->next=top;
    top=temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{   
    
    if(top==NULL) return -1;
    StackNode* temp=top;
    int k=temp->data;
    top=top->next;
    delete(temp);
    return k;
}
