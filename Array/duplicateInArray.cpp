int findDuplicate(vector<int> &arr) 
{		
    	//unique element finding block 
    	int ans=0;
		for(int i=0;i<arr.size();i++){
            ans=ans^arr[i];
        }
  
    //i=[1,arr.size()-1]
    	for(int i=1;i<arr.size();i++){
            ans=ans^i;
        }
    	return ans;
}
