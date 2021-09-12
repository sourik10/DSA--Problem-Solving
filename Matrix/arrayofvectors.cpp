#include<bits/stdc++.h>
using namespace std;

/*
void print(int ar[3][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

*/


//array of vectors approach


int main(){

	int m;  //rows
	cin>>m;

	int n=2;
	cin>>n;  //columns

	std::vector<int> ar[m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ar[i].push_back(10);
		}


	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}



	

}
