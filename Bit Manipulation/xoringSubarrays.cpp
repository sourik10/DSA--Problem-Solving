//https://www.geeksforgeeks.org/xor-subarray-xors-set-2/

int Solution::solve(vector<int> &A) {
    int n=A.size();
int xr=0;
if(n%2==0) return 0;
for(int i=0;i<n;i+=2)
{
xr=xr^A[i];
}
return xr;
}
