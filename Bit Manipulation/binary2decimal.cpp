#include<bits/stdc++.h>
using namespace std;

long long int binary2decimal(int n){
    int i=0;
    long long int ans=0;

    while(n!=0){
        int last=n%10;
        if(last){
            ans+=pow(2,i);
        }
        n/=10;
        i++;
    }return ans;
}

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
