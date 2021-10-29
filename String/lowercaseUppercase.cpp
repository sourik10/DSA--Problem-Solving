string modify (string s)
    {
        string res;
        if(isupper(s[0])){
            for(auto x:s) res+=toupper(x);
        }
        if(islower(s[0])){
            for(auto y:s) res+=tolower(y);
        }
        return res;
    }
