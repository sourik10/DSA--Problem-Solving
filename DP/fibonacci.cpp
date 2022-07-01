#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    int dp[n+1];
    memset(dp,-1,sizeof dp);
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
       int n;cin>>n;
       cout<<fibonacci(n)<<endl;
}
