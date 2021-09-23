int Solution::findMinXor(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int exor=A[0] ^ A[1];
    for(int i=2;i<A.size();i++){
        exor=min(exor,A[i-1]^A[i]);
    }
    return exor;
}
