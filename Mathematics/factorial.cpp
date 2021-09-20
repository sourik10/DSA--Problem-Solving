#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int M=1e7+9;
long long fact[N];


int main(){

	
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++){
		fact[i]=(fact[i-1] * i)%M;
	}

	int t;
	cin>>t;
	while(t--){
		int n; 
		cin>>n;

		cout<<fact[n]<<endl;
	}

}
