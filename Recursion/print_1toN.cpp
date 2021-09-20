#include<bits/stdc++.h>
using namespace std;

//decreasingOrder
void decreasing(int n){
  if(n==0) return;
  else{
    cout<<n<<" ";
    return decreasing(n-1);
  }
}

//increasingOrder
void increasing(int n){
  if(n==0) return;
  else{
    return increasing(n-1);
    cout<<n<<" ";
  }
}


