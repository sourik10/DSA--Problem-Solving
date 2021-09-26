int Solution::isPalindrome(int A) {
    int temp=A;
    int rev=0,rem=0;
    while(A>0){
        rev=(10*rev)+(A%10);
        A=A/10;
    }
    if(rev==temp) return 1;
    else return 0;
}
