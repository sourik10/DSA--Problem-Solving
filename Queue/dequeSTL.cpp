#include <iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main() {
   deque<int>d;
   d.push_front(10);
   d.push_front(5);
   d.push_back(15);
   d.push_back(20);
   
   for(auto x:d){
       cout<<x<<" ";
   }
   cout<<endl;
   
   d.pop_back();
   for(auto x:d){
       cout<<x<<" ";
   }
   cout<<endl;
   
   d.pop_front();
   for(auto x:d){
       cout<<x<<" ";
   }
   cout<<endl;
   cout<<"size: "<<d.size();
}
