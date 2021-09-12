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


//vector of vectors approach

int main(){


	int m,n;
	cin>>m>>n;



	vector<vector<int>> ar;
	for(int i=0;i<m;i++){

		std::vector<int> v;
		for(int j=0;j<n;j++){
			v.push_back(10);
		}
		ar.push_back(v);

	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}



	

}
