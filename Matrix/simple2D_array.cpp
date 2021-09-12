#include<bits/stdc++.h>
using namespace std;

void print(int ar[3][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){


	int ar[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin>>ar[i][j];
		}
	}

	print(ar);

}
