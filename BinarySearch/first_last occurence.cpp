class Solution {
public:
    int firstOccur(vector<int>&ar,int target){
        int l=0;
        int h=ar.size()-1;
        int ans=-1;
        
        while(l<=h){
            int mid=l+ (h-l)/2;
            if(ar[mid]==target){
                 ans=mid; //storingTargetted element 
                 h=mid-1;  //finding Leftmost/first occurence
            }
            else if(target>ar[mid]){
                l=mid+1;
            }
            else h=mid-1;
        }return ans;
    }
    int lastOccur(vector<int>&ar,int target){
        int l=0;
        int h=ar.size()-1;
        int ans=-1;
        
        while(l<=h){
            int mid=l+ (h-l)/2;
            if(ar[mid]==target){
                 ans=mid; //storing targettted element
                 l=mid+1; //finding last/rightmost occurence
            }
            else if(target>ar[mid]){
                l=mid+1;
            }
            else h=mid-1;
        }return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        v.push_back(firstOccur(nums,target));
        v.push_back(lastOccur(nums,target));
        
        return v;
    }
};
