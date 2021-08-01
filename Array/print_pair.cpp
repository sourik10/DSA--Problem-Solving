#include<bits/stdc++.h>
using namespace std;

void print_pair(int a[],int n){
	int x,y;

	for(int i=0;i<n;i++){
		int x=a[i];
		for(int j=i+1;j<n;j++){
			int y=a[j];

			cout<<x<<","<<y<<endl;
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

	print_pair(ar,n);


	


}
