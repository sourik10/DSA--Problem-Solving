#include <iostream>
using namespace std;

//single odd occuring
int singleOdd(int ar[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		res=res^ar[i];
	}
	return res;
}

//double odd occuring
void oddAppearing(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            cout<<arr[i]<<" ";
        
    }
    
}
