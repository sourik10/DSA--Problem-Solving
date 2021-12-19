	
int count(int a[],int n,int x) {
	    int t=0;
	    for(int i=0;i<n;i++) {
	        if(a[i]==x) t++;
	    }
	    cout<<t<<endl;
	}
	//another approach firstOCcurence ,Lastoccurence
//return lastOccur-firstOccur +1;
