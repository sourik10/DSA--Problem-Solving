#include<bits/stdc++.h>
using namespace std;

int binary_iter(int a[],int n,int key){
	int s=0;
	int e=n-1;
	
	while(s>=e){
	int mid=s + (e-s)/2;
	
	
	if(a[mid]==key) {
	return mid;
}
	else if(a[mid]<key){
		e=mid-1;
	}
	else{
		s=mid+1;
	}

}
	return -1;
}



int main(){
	int ar[]={10,20,30,40,50,60};
	int n=sizeof(ar)/sizeof(int);
	
	int key;
	cout<<"enter key value"<<endl;
	cin>>key;
	
	int index=binary_iter(ar,n,key);
	if(index!=-1){
		cout<<key<<" is present at index value "<<index<<endl;
	}
	else
	cout<<key<<" is not present in array"<<endl;
}
