#include<bits/stdc++.h>
using namespace std;

void reverse_Ar(int a[],int n){
	int s=0;
	int e=n-1;

	while(s<e){
		int temp=a[s];
		a[s]=a[e];
		a[e]=temp;

		s++;
		e--;
	}
}

void print_Ar(int ar[],int n){
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}

	cout<<endl;

}

int main(){

	int n;
	cin>>n;

	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	print_Ar(ar,n);
	reverse_Ar(ar,n);
	print_Ar(ar,n);


}

