#include<bits/stdc++.h>
using namespace std;


void print_snake(std::vector<int> ar[],int m){
	for(int i=0;i<m;i++){
		if(i%2!=0){   //row number odd
			for(int j=ar[i].size()-1;j>=0;j--){
				cout<<ar[i][j]<<" ";
			}
		}
		else{ //row number even
			for(int j=0;j<ar[i].size();j++){
				cout<<ar[i][j]<<" ";
			}
		}
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

	print_snake(ar,m);

	

}
