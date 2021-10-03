#include <bits/stdc++.h> 
using namespace std; 

void printQueue(queue<int>&q){
  while(!q.empty()){
    cout<<q.front()<<"->";
    q.pop();
  }
}

//recursive way
void reverse(queue<int>& q) 
{ 
  if(q.empty())
     return;
     
  int x = q.front();
   q.pop();
     
   reverse(q);
   q.push(x);
} 


//iterative way
void reverseIter(queue<int> &q){
  stack<int>s;
  while(!q.empty()){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }
}

int main(){
  queue<int> abc;
  abc.push(10);
  abc.push(20);
  abc.push(30);
  abc.push(40);

  //reverseIter(abc);
  reverse(abc);
  printQueue(abc);
} 
