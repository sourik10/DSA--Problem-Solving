#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int s=0;
    int e=A.size()-1;

    while(s<=e){
    	int mid=(s+e)/2;

    	if(A[mid]==Val) {
	return A[mid-1];
}
	else if(A[mid]>Val){
		e=mid-1;
	}
	else{
		s=mid+1;
	}

    }
    return -1; //element not present in array
   


    
}

int main(){

	std::vector<int> v={-1,-1,2,3,5};
	int val;
	cin>>val;

	cout<<lowerBound(v,val);



	


}
