//find displacement: given a long route containing N,W,E,S .find the shortest path to reach the loaction


#include<bits/stdc++.h>
using namespace std;

int main(){


	char r[100];
	cin.getline(r,100);

	int x=0;
	int y=0;


	for(int i=0;r[i]!='\0';i++){

		switch(r[i]){

			case 'S': y--; break;
			case 'N': y++; break;
			case 'E': x++; break;
			case 'W': x--; break;


		}

	}


	if(x>=0 && y>=0){
		while(x--){
			cout<<"E"<<" ";
		}
		while(y--){
			cout<<"N"<<" ";
		}
	}

	else if(x<0 && y>=0){
		while(x!=0){
			cout<<"E"<<" ";
			x++;
		}
		while(y--){
			cout<<"N"<<" ";
		}
	}


	else if(x<0 && y<0){
		while(x!=0){
			cout<<"E"<<" ";
			x++;
		}
		while(y!=0){
			cout<<"N"<<" ";
			y++;
		}
	}

	else {
		while(x--){
			cout<<"E"<<" ";
			
		}
		while(y!=0){
			cout<<"N"<<" ";
			y++;
		}
	}
}
