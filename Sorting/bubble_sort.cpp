#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){ 

		//repeatedly swapping two adj numbers
		for(int j=0;j<=n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){

	int ar[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(ar)/sizeof(int);

	bubble_sort(ar,n);
	for(auto x : ar){
		cout<<x<<",";
	}

	


}
