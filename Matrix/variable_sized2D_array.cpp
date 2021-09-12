#include<bits/stdc++.h>
using namespace std;

/*void print(int ar[3][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}
*/


int main(){

	int m=3,n=2;

	int ar[m][n];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin>>ar[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
		
	}



	

}


/*
#include<bits/stdc++.h>
using namespace std;

void print(int ar[][2],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main(){


	int ar[3][2]=  { {10, 20},
					 {30, 40},
					 {50, 60}};
				


	print(ar,3);



	

}
*/

