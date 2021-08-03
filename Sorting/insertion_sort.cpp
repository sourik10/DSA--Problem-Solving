#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){ 

		int current=a[i];
		int prev=i-1;
		while(prev>=0 and a[prev]>current){
			a[prev+1]=a[prev];
			prev-=1;
		}
		a[prev+1]=current;
		
	}

}



int main(){

	int ar[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(ar)/sizeof(int);

	insertion_sort(ar,n);
	for(auto x : ar){
		cout<<x<<",";
	}

	


}
