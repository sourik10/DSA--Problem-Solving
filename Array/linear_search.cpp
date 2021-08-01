
#include <iostream>
using namespace std;

int linear_search(int ar[],int n,int key){
    for(int i=0;i<n;i++){
        if(ar[i]==key) return i;
    }
    return -1;
}

int main() {
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int key;
    cout<<"enter key value";
    cin>>key;
    
    int index=linear_search(ar,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index;
    }
    else cout<<key<<" is not present in array"<<endl;
    
    

    return 0;
}


