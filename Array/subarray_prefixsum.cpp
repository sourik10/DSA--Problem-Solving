#include<bits/stdc++.h>
using namespace std;

int  largest_sum(int a[],int n){ //prefix sum 


	//time complexity=O(n*n)=O(n^2)

	int p[n]={0};

	p[0]=0; //updating prefix array 
	for(int i=1;i<n;i++){
		p[i]=p[i-1]+a[i];
	}


	int largestsum=0;
	for(int i=0;i<n;i++){ 

		for(int j=i;j<n;j++){

			int subarr=i>0?p[j]-p[i-1]:p[j];
			largestsum=max(largestsum,subarr);
			
		}
	}
	return largestsum;
}

int main(){

	int ar[]={10,-20,-10,40,50};
	int n=sizeof(ar)/sizeof(int);

	cout<<largest_sum(ar,n);


	


}
