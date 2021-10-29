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

int Solution::trailingZeroes(int A) {
    if(A<0) return -1;

    int count=0;
    while(A>0){
        count+=(A/5);
        A/=5;
    }
    return count;
}

int main() {
    
    	int number = 10;
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}
