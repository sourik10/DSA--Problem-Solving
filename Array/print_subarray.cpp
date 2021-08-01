#include<bits/stdc++.h>
using namespace std;

void print_subarray(int a[],int n){

	//time complexity=O(n*n*n)=O(n^3)
	for(int i=0;i<n;i++){ 

		for(int j=i;j<n;j++){
			
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ,";
			}
			cout<<endl;
			
		}
		cout<<endl;
	}
}

int main(){

	int ar[]={10,20,30,40,50};
	int n=sizeof(ar)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}

	cout<<endl;

	print_subarray(ar,n);


	


}
