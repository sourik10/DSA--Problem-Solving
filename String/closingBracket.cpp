int closing (string s, int pos){
        	int bOpen=1,bClose=0;
        	for(int i=pos+1;i<s.size();i++){
        	    if(s[i]=='[') bOpen++;
        	    else if(s[i]==']') bClose++;
    
        	if(bOpen==bClose){
        	    return i;
        	    break;
        	}
        }
    }
