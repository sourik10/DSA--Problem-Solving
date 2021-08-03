#include<bits/stdc++.h>
using namespace std;

void count_sort(int a[],int n){
	
	int k=a[0];

	//finding the largest element in array
	for(int i=0;i<n;i++){
		k=max(k,a[i]);
	}

	//creating count[] of size max+1
	int count[100]={0};

	//updating count array with frequency
	for(int i=0;i<=k;i++){
		count[a[i]]++;
	}

	//finding cumulative frequency in count[]
	for(int i=1;i<=k;i++){
		count[i]+=count[i-1];
	}

	int f[n];
	for(int i=n-1;i>=0;i--){
		f[--count[a[i]]]=a[i];
	}


	//copying in a[]
	for(int i=0;i<n;i++){
		a[i]=f[i];
	}



}



int main(){

	int ar[]={2,3,4,1,5,12,6,1,3};
	int n=sizeof(ar)/sizeof(int);

	count_sort(ar,n);
	for(int i=0;i<n;i++){
		cout<<ar[i]<<",";
	}

	
}
