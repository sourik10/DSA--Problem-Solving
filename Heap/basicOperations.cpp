#include<bits/stdc++.h>
using namespace std;

/*
MinHeap----
Complete Binary Tree where root is 
the smallest one from all of its descendants.No duplicate value.
*/

class MinHeap{
	int *ar;
	int size,cap;

public:
	MinHeap(int c){
		size=0;
		cap=c;
		ar=new int[c];
	}

	//left,right and parent indexValue
	int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; } 

    //insertOperation in MinHeap
    //timeComplexity for insert---O(h) ,h is the height of Heap.
    void insertHeap(int x){
    	if(size==cap) return;
    	size++;
    	ar[size-1]=x;
    	for(int i=size-1;i!=0 && ar[parent(i)] > ar[i]; ){
    		swap(ar[i],ar[parent(i)]);
    		i=parent(i);
    	}
    }


    //heapify Method in Heap
    void minHeapify(int x){  //here, x is the indexof array
    	int lt=left(x);
    	int rt=right(x);
    	int smallest=x;
    	if(lt<size and ar[lt]<ar[x]){
    		smallest=x;
    	}
    	if(rt<size and ar[rt]<ar[smallest]){
    		smallest=rt;
    	}
    	if(smallest!=x){
    		swap(ar[smallest],ar[x]);
    		minHeapify(smallest);    	
    	}
    }


    //extract the MinElement in Heap
    int extractMinElement(){
    	if(size<=0){
    		return INT_MAX;
    	}
    	if(size==1){
    		size--;
    		return ar[0];
    	}
    	swap(ar[0],ar[size-1]);
    	size--;
    	minHeapify(0);

    	return ar[size];
    }

    //decreaseKey,deleteKey time complexity --->O(log n);
    void decreaseKey(int i,int data){ //i=arrayIndex ; ar[i]=data;
    	ar[i]=data;
    	while(i!=0 and ar[parent(i)]>ar[i]){
    		swap(ar[parent(i)],ar[i]);
    		i=parent(i);
    	}
    }

    void deleteKey(int i){
    	decreaseKey(i,INT_MIN);
    	extractMinElement();
    }


    //parentOfLast Leaf Node--->index value=(n-2)/2;
    //buildHeap timeComplexity---->O(n*log(n)) ; n=number of nodes  
     void buildHeap(){  
        for(int i=(size-2)/2;i>=0;i--)
            minHeapify(i);
    }

};

int main(){
	MinHeap h(10);

	h.insertHeap(30); 
    h.insertHeap(21);
    h.insertHeap(15);
    h.insertHeap(20);
    cout<<h.extractMinElement()<<endl; //RootElement Minimum = 15

    h.decreaseKey(0,16); //Root element 15 changed to 16
    cout<<h.extractMinElement()<<endl; //NewRoot = 16

    h.deleteKey(0); //deleting root (16)
    cout<<h.extractMinElement()<<endl; //newRoot = 20

}
