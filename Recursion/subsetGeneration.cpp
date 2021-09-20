//{1,2,3}...find all subsets of this vector.


#include<bits/stdc++.h>
using namespace std;

//globally declared 2d-vector for subset generation
vector<vector<int> >subs;  

void generation(vector<int> &sub,int i,vector<int>ar){

    //base case
    if(i==ar.size()){
        subs.push_back(sub);
        return;
    }


    //if i-th element not present in ar-vector
    generation(sub,i+1,ar);

    //if i-th elemnt present in ar-vector
    sub.push_back(ar[i]);
    generation(sub,i+1,ar);
    sub.pop_back(); 



}


int main(){

    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>empty;
    generation(empty,0,a);

    //printing all subsets by subs(2d vector)
    for(auto r: subs){
        for(auto el : r){
            cout<<el<<" ";
        }
        cout<<endl;
    }


}
