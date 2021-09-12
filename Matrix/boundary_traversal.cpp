#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4;

void boundary_print(int ar[r][c]){
	if(r==1){
		for(int i=0;i<c;i++){
			cout<<ar[0][i]<<" ";
		}
	}

	else if(c==1){
		for(int i=0;i<r;i++){
			cout<<ar[i][0]<<" ";
		}
	}
	else{
		for(int i=0;i<c;i++){
			cout<<ar[0][i]<<" ";
		}

		for(int i=1;i<r;i++){
			cout<<ar[i][c-1]<<" ";
		}

		for(int i=c-2;i>=0;i--){
			cout<<ar[r-1][i]<<" ";
		}

		for(int i=r-2;i>=1;i--){
			cout<<ar[i][0]<<" ";
		}
	}



}

int main(){

	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ar[i][j];
		}
	}

	/*for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
	*/


	boundary_print(ar);

	

}
