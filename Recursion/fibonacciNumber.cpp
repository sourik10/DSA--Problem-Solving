//time = O(2*N)  recursive appraoch
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};


//time O(n),space O(n)
class Solution {
public:
    int fib(int n){
        if(n<2){
            return n;
        }
        int ar[n+1];
        ar[0]=0;
        ar[1]=1;
        for(int i=2;i<=n;i++){
            ar[i]=ar[i-1]+ar[i-2];
        }
        return ar[n];
        
    }
    
};


//time=O(N) space O(N)
class Solution {
public:
    int fib(int n){
        if(n<2){
            return n;
        }
        int a=0,b=1,c;
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
    
};
