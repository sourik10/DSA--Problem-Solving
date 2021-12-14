#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n; 
    int k=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k++<<" ";  
            j++;
        }
        cout<<endl;
        i++;
    }
}
