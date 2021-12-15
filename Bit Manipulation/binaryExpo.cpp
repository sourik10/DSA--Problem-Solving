class Solution {
public:
    double myPow(double x, int n) {
        
        
        //binary Expotentiation
        double res=1;
       while(n){
           if(n%2){ //oddPower
               res=n>0?res*x:res/x;
           }
           x=x*x;
           n/=2;
       }
        return res;
    }
};
