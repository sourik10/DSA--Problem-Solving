/*
Print frequency of characters(orderwise)
in a string containing only lowercase letter

ASCii value
'a'= 97
'A'= 65

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	getline(cin,s);


	//updating count[26] array
	int count[26]={0};
	for(int i=0;i<s.length();i++){
		count[s[i]-'a']++;
	}


	//printing characters with frequency
	for(int i=0;i<26;i++){
		if(count[i]>0){
			cout<<(char)(i+'a')<<" "<<count[i]<<endl;
		}
	}
}
