class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int l=N.length();
	    
	    int lSum=0,rSum=0;
	    for(int i=0;i<l/2;i++){
	        lSum+=N[i];
	    }
	    for(int i=(l/2)+1;i<=l;i++){
	        rSum+=N[i];
	    }
	    if(lSum==rSum) return true;
	    else return false;
	}
};
