#include<bits/stdc++.h>
using namespace std;
/*
Binary exponentiaton --- O(logN * logM) time wherer N base, M power
*/


long long power(int base,int n,int mod){
	long long ans=1;
	while(n!=0){

		if(n%2){  //power n is odd
			ans=(ans*base)% mod;
			n=n-1;
		}
		else{
			n=n/2;
			base=(base*base)% mod;
		}
	}

	return ans;
}

int main(){
	int a,b;
	int mod=1e9+7;
	cin>>a>>b;
	
	cout<<power(a,b,mod)<<endl;
}
