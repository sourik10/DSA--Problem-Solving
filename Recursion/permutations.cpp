//permutation
//naive solution using extra array
class Solution {
    //time = O(n! * n)
    //space = O(n) + O(n) 
private:
    void helper(vector<vector<int>>&ans,vector<int>&ds,bool freq[],vector<int>&nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=true;
                helper(ans,ds,freq,nums);
                freq[i]=false;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        bool freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=false;
        helper(ans,ds,freq,nums);
        return ans;
    }
};


//effective solution
class Solution {
private:
    void helper(int ind,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            helper(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0,nums,ans);
        return ans;
    }
};
