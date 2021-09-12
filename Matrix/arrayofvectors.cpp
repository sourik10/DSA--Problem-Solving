#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr[], int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}


//array of vectors approach


int main(){

	int m;  //rows
	cin>>m;

	int n;
	cin>>n;  //columns

	int x;
	

	std::vector<int> ar[m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>x;
			ar[i].push_back(x);
		}


	}

	print(ar,m);

	

	

}
