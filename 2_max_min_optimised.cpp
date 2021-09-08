#include<bits/stdc++.h>
using namespace std;

void max_min_optimised(int ar[],int n){

	int maxi;
	int mini;
	int i;


	//even number of elemnt present                //no of comparison 
													// odd = 3*(n-1)/2         even = 1 + 3*(n-2)/2
                                          
	if(n%2==0){

		if(ar[0]>ar[1]){
			maxi=ar[0];
			mini=ar[1];
		}

		else{
			maxi=ar[1];
			mini=ar[0];

		}

		i=2;
	}

	//odd number of elemnt present
	else{

		maxi=ar[0];
		mini=ar[0];
		i=1;
	}

	while(i<n-1){

		if(ar[i]>ar[i+1]){

			if(maxi<ar[i]){
				maxi=ar[i];
			}

			if(mini>ar[i+1]){
				mini=ar[i+1];
			}

		}

		if(ar[i]<ar[i+1]){

			if(maxi<ar[i+1]){
				maxi=ar[i+1];
			}

			if(mini>ar[i]){
				mini=ar[i];
			}
		}

		i=i+2;
	}


	cout<<"maximum element in array: "<<maxi<<endl;
	cout<<"minimum element in array: "<<mini<<endl;


}

int main(){

	int n;
	cin>>n;

	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	max_min_optimised(ar,n);



}
