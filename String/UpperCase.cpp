#include<bits/stdc++.h>
using namespace std;

char upperCase(char m){
	return 'A'+(m-'a');
}

int main(){
	while(true){
		string s; cin>>s;
		if(s.size()==0){
			break;
		}
		for(int i=0;i<s.size();i++){
			s[i]=upperCase(s[i]);
		}
		cout<<s<<endl;
	}
}
