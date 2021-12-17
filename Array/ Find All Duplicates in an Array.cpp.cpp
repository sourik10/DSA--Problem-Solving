class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it :mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int findDuplicate(vector<int> &arr) 
{	
	
	/* 
	bitManipulation
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
	*/
	 
}
