#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){

	int c=0;
	while(n>0){
		n=n/10;
		c++;
	}
	return c;
}

int main(){
	int N;
	cin>>N;
	cout<<"digits: "<<countDigits(N);
}
