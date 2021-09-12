#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4; //aray size gloabally declared 


//rotate_matrix= make transpose of given matrix & reverse individual row 
//time o(n2) ; space=o(1)
void rotate_matrixby90(int ar[][c]){

	for(int i = 0; i < c; i++)
		for(int j = i + 1; j < c; j++)
			swap(ar[i][j], ar[j][i]);

  //reverse individual column
	for(int i=0;i<c;i++){
		int l=0,h=c-1;
		while(l<h){
			swap(ar[l][i],ar[h][i]);
			l++;
			h--;
		}
	}
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


	rotate_matrixby90(ar);
	print(ar);





}
