#include<bits/stdc++.h>
using namespace std;

void max_min(int ar[],int n){

	int maxi,mini;                             //time relation:  t(n)=2*(n-1) + 1 

	//only 1 element present 
	if(n==1){
		maxi=ar[0];
		mini=ar[0];
	}



	//only 2 element present 
	else{
		if(ar[0]<ar[1]){

			maxi=ar[1];
			mini=ar[0];
		}
		else{

			maxi=ar[0];
			mini=ar[1];
		}
	}

	//rest element in array

	for(int i=2;i<n;i++){
		if(ar[i]>maxi){
			maxi=ar[i];
		}

		if(ar[i]<mini){
			mini=ar[i];
		}
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

	max_min(ar,n);





}
