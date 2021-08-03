#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n){
	for(int pos=0;pos<=n-2;pos++){   //initially taking a[0] as the min_position

		int min_pos=pos;  

		//finding minimum element in unsorted array
		for(int j=pos;j<=n-1;j++){

			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(a[pos],a[min_pos]);
	}

}



int main(){

	int ar[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(ar)/sizeof(int);

	selection_sort(ar,n);
	for(auto x : ar){
		cout<<x<<",";
	}

	


}
