//memoization method DP
//time O(n) for n traversal linearly
//space O(n)+O(n) for n creating dp array of size(n)

#include<bits/stdc++.h>
using namespace std; 
int fibo(int n){
    int dp[n+1];
    memset(dp,-1,sizeof dp);
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
}
int main()
{
      int n;cin>>n;
      cout<<fibo(n)<<endl;
  
    /*
    //tabular method DP(bottom to up appraoch)
    ////time O(n),space O(n)
    
     int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;
    */
  
  /*
  
  space optimisation 
  //time O(n),space O(1)
  
   int n;cin>>n;
      int prev=1,prev2=0;
    for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<prev<<endl;
    
    */
}
