#include <iostream>
using namespace std;
struct DequeAr{
    int cap,size,front;
    int* arr;
    DequeAr(int c){
        arr=new int[c];
        cap=c;
        size=0;
        front=0;
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return (size==cap);
    }
    int getRear(){
        if(isEmpty()) return -1;
        else (front+size-1)%cap;
    }
    int getFront(){
        if(isEmpty()) return -1;
        else front;
    }
    void deleteFront(){
        if(!isEmpty()){
            front=(front+1)%cap;
            size--;
        }
    }
    void insertRear(int val){
        if(!isFull()){
            int newrear=(front+size)%cap;
            arr[newrear]=val;
            size++;
        }
    }
    
    void deleteRear(){
        if(isEmpty()) return;
        size--;
    }
    void insertFront(int x){
        if(isFull()) return;
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    
    
};
