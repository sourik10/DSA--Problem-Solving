#include<bits/stdc++.h>
using namespace std;

int kth_smallest(int ar[],int n,int k){      //O(1) time 
	return ar[k-1];

}


int kth_largest(int ar[],int n,int k){        //O(1) time 

	return ar[n-k];

}



int main(){

	int n;
	cin>>n;

	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}


	sort(ar,ar+n); //O(n*logn) time 

	int k;
	cin>>k;

	if(k>n-1){
		cout<<"not possible "<<endl;
	}

	else{
		cout<<"kth smallest element: "<<kth_smallest(ar,n,k)<<endl;
		cout<<"kth largest element: "<<kth_largest(ar,n,k);
	}


}
