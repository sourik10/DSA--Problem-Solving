#include<bits/stdc++.h>
using namespace std;


void print(vector<vector<int>> &ar){
	for(int i=0;i<ar.size();i++){
		for(int j=0;j<ar[i].size();j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
}


//vector of vectors approach

int main(){


	int m,n;
	cin>>m>>n;

	int x; //element in 2d matrix



	vector<vector<int>> ar;
	for(int i=0;i<m;i++){

		std::vector<int> v;
		for(int j=0;j<n;j++){
			cin>>x;
			v.push_back(x);
		}
		ar.push_back(v);

	}

	print(ar);



	

}
