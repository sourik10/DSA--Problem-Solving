class Solution
{
  public:   
    int countCamelCase (string s)
    {
        int n=s.length();
        int co=0;
        for(int i=0;i<n;i++){
            if(s[i]>='A' and s[i]<='Z') co++;
        }
        return co;
    }
};
