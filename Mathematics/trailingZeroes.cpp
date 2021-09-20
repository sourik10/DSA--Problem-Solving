//trailing zeroes in factorial(n) of a number n

#include <bits/stdc++.h>
using namespace std;

 int countTrailingZeros(int n){
	int res = 0;

	for(int i=5; i<=n; i=i*5){
		res = res + (n / i);
	}

	return res;
}
int main() {
    
    	int number = 10;
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}
