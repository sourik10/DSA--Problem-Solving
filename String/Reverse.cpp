class Solution {
  public:
    string conRevstr(string S1, string S2) {
        string S3=S1+S2;
        int n=S3.length();
        for(int i=0;i<n/2;i++){
            swap(S3[i],S3[n-i-1]);
        }
        return S3;
    }
};
