class Solution{
    public:
    string longest(string names[], int n)
    {
        int hl=names[0].length();
        int index=0;
        for(int i=1;i<n;i++){
            if(names[i].length()>hl){
                hl=names[i].length();
                index=i;
            }
        }
        return names[index];
        
    }
};
