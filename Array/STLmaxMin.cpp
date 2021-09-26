int Solution::solve(vector<int> &A) {
   sort(A.begin(),A.end());
   return A[0]+A[A.size()-1];
}

int Solution::solve(vector<int> &A) {
    //inbuilt STL 
   int m=*max_element(A.begin(),A.end());
   int n=*min_element(A.begin(),A.end());
   return m+n;
}

