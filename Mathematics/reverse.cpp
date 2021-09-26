int Solution::reverse(int A) {
    int sign=1;
  
    if(A<0){
        sign*=-1;        
        A=A*sign;
    }
    int ans=0;
    while(A>0){
        if(ans>INT_MAX/10 || (ans==INT_MAX/10 && A%10 > INT_MAX%10)){
            return 0;
        }
        ans=((ans*10)+(A%10));
        A=A/10;
    }
    return ans*sign;
}


