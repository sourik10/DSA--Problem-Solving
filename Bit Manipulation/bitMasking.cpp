#include<iostream>
using namespace std;


//bit masking 
int main(){
int x = 0;
	cout << (~x) <<endl; //output =1111111111111111111111-----> decimal val=-h
}



//get ith bit 
int getIthBit(int n,int i){
	int mask = (1<<i);
	return (n & mask) > 0 ? 1 : 0;
}



//set ith bit
void setIthBit(int &n,int i){

	int mask = (1<<i);
	n = (n|mask);
}


//clear ith bit 
void clearIthBit(int &n,int i){

	int mask = ~(1<<i);
	n = n & mask;
}




//update ith bit (set/unset)
void updateIthBit(int &n,int i,int v){
	clearIthBit(n,i);
	int mask = (v<<i);
	n = n|mask; //sets the right value
}



//clear last i bits
void clearLastIBits(int &n,int i){
	int mask = (-1 << i);
	n = n & mask;
}



void clearBitsInRange(int &n,int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask;
}


//Counting Sets Bits : Hack  (Faster method)
int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}


//decimal to binary conversion
void printBinary(int n){
	for(int i=8;i>=0;i--){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}

//alternative
int convertToBinary(int n){

	int ans = 0;
	int p = 1;

	while(n>0){
		int last_bit = (n&1);
		ans += p*last_bit;

		p = p*10;
		n = n>>1;
	}
	return ans;

}



//binary 2 decimal conversion
int binaryToDecimal(string s)
{
  int d=0;
  int n=s.length()-1;
  int b=1;
  
  for(int i=n;i>=0;i--){
      if(s[i]=='1'){
          d=d+b;
      }
      b*=2;
  }
  
  return d;
}



//odd-even check 
void odd_even(int n){
  if(n&1) 
    cout<<"ODD"<<endl;
  
  else 
    cout<<"EVEN"<<endl;
  
}



//check power of 2
void check(int n){
  if( (n & (n-1))==0){
		cout<<"Power of 2";
	}
	else{
		cout<<"Not a power of 2";
	}
  
}




//Fast Exponentitation
int fastExpo(int a,int n){
	int ans = 1;

	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans = ans * a;
		}
		a = a*a;
		n = n>>1;

	}
	return ans;
}


//xoring of numbers
#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
   int a=0;
   for(auto x:v) {
       a=a^x;
   }
   return a;
   
    
}






