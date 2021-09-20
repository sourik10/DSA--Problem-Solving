
/* Implementation of SieveErastothene----prime number n/w 1 to n
  time complexity O(n*log(n))
 */

#include <iostream>
#include <limits.h>
using namespace std;

 void sieve(int n)
{
	if(n <= 1)
		return;

	//making a Boolean array isPrime[n+1]
	bool isPrime[n+1];

	//filling array elemnets with True Value
	//fill(isPrime, isPrime + n + 1, true);
	for(int i=2;i<=n;i++){
		isPrime[i]=true;
	}


	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			//if its a multiple of i make it false(non-prime)
			for(int j = i*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	//output only prime no
	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}
int main() {
    
    	int n = 19;

	sieve(n);
}
