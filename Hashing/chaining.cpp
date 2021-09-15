//implementation of Chaining in Hashing -----search,delete,insert an elemnt in O(1) time 

#include<bits/stdc++.h>
using namespace std;

struct chaining{
	int bucket;  //bucket -> hash-table size
	list<int>*table;  

	chaining(int b){
		bucket=b;
		table=new list<int> [bucket];
	}

	void insert_key(int k){

		//simple-hash function
		int i=k%bucket;
		table[i].push_back(k);
	}

	void remove_key(int k){

		int i=k%bucket;
		table[i].remove(k);
	}


	bool search_key(int k){
		int i=k%bucket;
		for(auto x :table[i]){
			if(x==k){
				return true;
			}
		}
		return false;
	}

};

int main(){

	chaining obj(5); //hash-table size= 5

	obj.insert_key(11);
	obj.insert_key(10);
	obj.insert_key(20);

	obj.insert_key(12);

	cout<<obj.search_key(20)<<endl;

	//removing an element from Hash-Table
	obj.remove_key(10);
	cout<<obj.search_key(10);





}
