#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
    cin>>ar[i];
}
int i=0;
while(i<n-1){
  
    /* 
      int t=ar[i];
      ar[i]=ar[i+1];
      ar[i+1]=ar[i];
     */
    swap(ar[i],ar[i+1]);
    i+=2;
}
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}
}

    
