class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int rc=0,gc=0;
           for(int i=0;i<N;i++){
               if(S[i]=='R') rc++;
               else gc++;
           }
           if(gc>rc) {
              return rc;
           }
           else return gc;
       }
    
};
