class Solution {
  public:
    string delAlternate(string S) {
        int n=S.length(); 
        string ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans+=S[i];
            }
        }
        return ans;
    }
};
