#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n%1)
	       count++;
	    n = n>>1;      
	} 
	return count; 
} 


int countOnes(int n){
	int count=0;
	while(n!=0){
		n=n&(n-1);
		count++;
	}
	return count;
}


