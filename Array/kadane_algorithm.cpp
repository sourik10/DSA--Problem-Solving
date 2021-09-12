#include<bits/stdc++.h>
using namespace std;

int kadane_algorithm(int ar[],int n){    //time complexity : O(n)

	int maxSum=INT_MIN;
	int currSum=0;

	for(int i=0;i<n;i++){

		currSum+=ar[i];

		if(currSum>maxSum){
			maxSum=currSum;
		}

		if(currSum<0){
			currSum=0;
		}
	}

	return maxSum;
}

int main(){

	int n;
	cin>>n;

	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}


	cout<<"Largest Sum Contiguous Subarray: "<<kadane_algorithm(ar,n)<<endl;

	


}
