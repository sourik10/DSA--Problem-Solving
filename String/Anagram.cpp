bool isAnagram(string a, string b){
        int n1=a.length();
        int n2=b.length();
        
        if(n1!=n2) return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n1;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
