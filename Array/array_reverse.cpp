#include<bits/stdc++.h>
using namespace std;
void reverse_ar(int a[],int n){

	int s=0;
	int e=n-1;
	while(s<e){
		swap(a[s],a[e]);
		s++;
		e--;
	}
}

int main(){

	int ar[]={10,20,30,40,50};
	int n=sizeof(ar)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}

	reverse_ar(ar,n);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}


}
