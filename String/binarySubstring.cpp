long binarySubstring(int n, string a){
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1') x++;
        }
        return x*(x-1)/2;
        
    }
