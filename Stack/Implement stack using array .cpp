void MyStack :: push(int x)
{
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    int k;
    if(top!=-1){
        k=arr[top];
        top--;
    }
    else{
        k=-1;
    }
    return k;
}
