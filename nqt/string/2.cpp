https://takeuforward.org/data-structure/count-number-of-vowels-consonants-spaces-in-string/
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

char lowercase(char ch){
    if(ch==' ') return ch;
    if(ch>='a' && ch<='z') return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
void findCounts(string str){
	int vowl=0,cons=0,white=0; 
	for(int i=0;i<str.size();i++){
		char temp=lowercase(str[i]);
		if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u'){
			vowl++;
		}
		else if(temp>='a' && temp<='z') cons++;
		if(temp==' ') white++;
	}
	cout<<vowl<<endl;
	cout<<cons<<endl;
	cout<<white<<endl;
}
int main(){
	string str;
	getline(cin,str);
	findCounts(str);
}
	//fastread();
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
