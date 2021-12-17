#include<bits/stdc++.h>
using namespace std;

void swapAlternatives(int arr[],int n){
  
  int i=0;
  while(i<n-1){
    swap(arr[i],arr[i+1]);
    i+=2;
    /* 
      int t=ar[i];
      ar[i]=ar[i+1];
      ar[i+1]=ar[i];
     */
  }
  //printing array elements 
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}
