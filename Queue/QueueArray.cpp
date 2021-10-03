#include <bits/stdc++.h>
using namespace std;

//circular array -->Queue DS
struct QueueAr{
    int cap,size,front;
    int *ar;
    QueueAr(int c){
        cap=c;
        front=0;
        size=0;
        ar=new int[c];
    }
    bool isFull(){
        return (cap==size);
    }
    bool isEmpty(){
        return (size==0);
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return front;
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return (front+size-1)%cap;
    }
    void enqueue(int x){
        if(isFull()) return;
        int rear=getRear();
        rear=(rear+1)%cap;
        ar[rear]=cap;
        size++;
    }
    void dequeue(){
        if(isEmpty()) return;
        front=(front+1)%cap;
        size--;
    }
    
};

int main() {
    QueueAr pq(5);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(30);

    cout<<pq.getFront()<<endl;
    cout<<pq.getRear()<<endl;
    
   
}
