//kadane's algortihm ---O(n) time complexity


#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maxsum=INT_MIN;
    int currentsum=0;
    
    for(int i=0;i<A.size();i++){
        currentsum+=A[i];
        
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        
        if(currentsum<0){
            currentsum=0;
        }
    }
    return maxsum;
}

