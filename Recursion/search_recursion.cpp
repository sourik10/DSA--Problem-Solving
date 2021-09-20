#include<bits/stdc++.h>
using namespace std;

bool recursiveSearch(int arr[], int l,  
                            int r, int x) 
{ 
    if (r < l) 
        return false; 
    if (arr[l] == x) 
        return true; 
    if (arr[r] == x) 
        return true; 

    return recursiveSearch(arr, l + 1,  
                              r - 1, x); 
} 


