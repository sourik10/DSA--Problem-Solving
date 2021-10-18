class Solution {
  public:
    string toLower(string S) {
        for(int i=0;i<S.size();i++){
            if(S[i]>=65 and S[i]<=90){
                S[i]=S[i]+32;
            }
        }
        return S;
    }
};
