#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n % 2 != 0)
	       count++;
	    n = n>>1;      
	} 
	return count; 
} 

