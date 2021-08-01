#include<bits/stdc++.h>
using namespace std;

int  largest_sum(int a[],int n){ //brute force approach


	//time complexity=O(n*n*n)=O(n^3)

	int largestsum=0;
	for(int i=0;i<n;i++){ 

		for(int j=i;j<n;j++){

			int subarray_sum=0;
			for(int k=i;k<=j;k++){
				subarray_sum+=a[k];  //calculating sum of subarrays for every pair
			}


			// checking if subarray_sum > largestsum
			largestsum=max(largestsum,subarray_sum); //updating largestsum
			
		}
	}
	return largestsum;
}

int main(){

	int ar[]={10,-20,-10,40,50};
	int n=sizeof(ar)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}

	cout<<endl;

	cout<<largest_sum(ar,n);


	


}
