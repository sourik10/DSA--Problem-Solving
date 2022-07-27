#include<bits/stdc++.h>
using namespace std;

char upperCase(char m){
	return 'A'+(m-'a');
}

string convertString(string str) {
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32; //lowercase to uppecase
        }
        while(i<str.length() && str[i]!=' '){
            i++;
        }
    }
    return str;
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
