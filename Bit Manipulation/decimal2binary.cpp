#include<bits/stdc++.h>
using namespace std;

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

int convert2Binary(int n){
    for(int i=7;i>=0;i--){
        int k=n>>1;
        if(k&1){
            cout<<"1";
        }
        else cout<<"0";
}
    
int main(){
   int n;
    cin >> n;
    cout<<convertToBinary(n);

}
