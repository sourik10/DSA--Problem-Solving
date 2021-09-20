#include<bits/stdc++.h>
using namespace std;


//left-shift operator
void isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 


//right-shift operator
void isKthBitSet(int n, int k) 
{ 
	if ((n >> (k - 1)) & 1) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 
