#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   int i=0,ans=0;

   while(n!=0){
    int lastBit= n%10;
    if(lastBit){
        ans+=pow(2,i);
    }
    n/=10;
    i++;
   }
   cout<<ans<<endl;
}
