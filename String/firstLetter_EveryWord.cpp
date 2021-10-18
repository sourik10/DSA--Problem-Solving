class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string r;
	    r.push_back(S[0]);
	    for(int i=0;i<S.length();i++){
	        if(S[i]==' '){
	            r.push_back(S[i+1]);
	        }
	    }
	    return r;
	}
};
