class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>res; //to  store frequecny of unique elements
        
        //count of each distinct eleemnt 
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        //if set size == map size ->return true
        for(auto i=mp.begin();i!=mp.end();i++){
            res.insert(i->second);
        }
        return mp.size()==res.size();
    }
};
