#include<bits/stdc++.h>
using namespace std;


void reverseInGroups(int arr[], int n, int k){
        
        int s=0;
        int e=k-1;
        while(s<e){
        	swap(arr[s],arr[e]);
        	s++;
        	e--;
        }

        int s2=k;
        int e2=n-1;
        while(s2<e2){
        	swap(arr[s2],arr[e2]);
        	s2++;
        	e2--;
        }

        for(int i=0;i<n;i++){
        	cout<<arr[i]<<" ";
        }
    }


int main()
{

int arr[]={1,2,3,4,5};
reverseInGroups(arr,5,3);

//Output: 3 2 1 5 4
	
}
