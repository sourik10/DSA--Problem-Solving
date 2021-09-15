//implementation of direct access table(DAT)------search,delete,insert----O(1) time 

#include <bits/stdc++.h>
using namespace std;

struct DAT{
    int table[1000]={0};
    
    void insert(int i){
        table[i]=1;
    }
    
    void delete_DAT(int i){
        table[i]=0;
    }
    
    int search(int i){
        return table[i];
    }
};

int main()
{
    DAT dat;        //direct access table={10,20,30,40}
    dat.insert(10);
    dat.insert(20);
    dat.insert(30);
    dat.insert(40);


    //{10,20} present in direct access table(DAT)
    cout<<dat.search(10)<<endl;
    cout<<dat.search(20)<<endl;

    //{100} not present in DAT
    cout<<dat.search(100)<<endl;
    
    dat.delete_DAT(30);
    cout<<dat.search(30)<<endl;
    
    return 0; 
}
