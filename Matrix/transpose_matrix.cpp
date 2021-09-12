#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4; //aray size gloabally declared 
void transpose(int ar[][c]){

	int temp[c][c];
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			temp[i][j]=ar[j][i];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			ar[i][j]=temp[i][j];
		}
	}

}


//efficient approach
void transpose_diagonalfixed(int mat[][c]){
    for(int i = 0; i < c; i++)
		for(int j = i + 1; j < c; j++)
			swap(mat[i][j], mat[j][i]);

}



void print(int ar[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

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
	print(ar);
	cout<<endl;


	transpose_diagonalfixed(ar);
	print(ar);



	

}
