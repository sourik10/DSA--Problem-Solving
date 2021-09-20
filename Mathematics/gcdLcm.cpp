//GCD-LCM 
//Time Complexity: O(log(min(a, b)))

#include <bits/stdc++.h>
using namespace std;

 int gcd(int a, int b){
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}


int main() {
    int p,q;
    cin>>p>>q;

    cout<<"gcd: "<<gcd(p,q)<<endl;
    cout<<"lcm: "<<lcm(p,q)<<endl;
}
