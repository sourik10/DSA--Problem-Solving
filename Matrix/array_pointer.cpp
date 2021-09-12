#include<bits/stdc++.h>
using namespace std;


int main(){

	int m;  //rows
	cin>>m;

	int n=2;
	cin>>n;  //columns

	int *ar[m];
	for(int i=0;i<m;i++){
		ar[i]=new int[n];
		for(int j=0;j<n;j++){
			cin>>ar[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}



	

}
