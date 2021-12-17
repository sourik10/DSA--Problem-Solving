//brute force --->O(n*n)
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>r;
    for(int i=0;i<n;i++){
        int x=arr1[i];
        for(int j=0;j<m;j++){
            if(x<arr2[j]){
                break;
            }
            if(x==arr2[j]){
                r.push_back(x);
                arr2[j]=-99999999;
                break; //exit from inner for loop
            }
        }
    }return r;
}

//Two pointer approach--->O(n)
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int>res;
	int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] == arr2[j]){
            res.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) i++;
          
        else j++;
    }
    return res;
}

//using set in stl
class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s(nums1.begin(),nums1.end());
        vector<int>v;
        for(auto x:nums2){
            if(s.erase(x)){
                v.push_back(x);
            }
        }
        return v;
        /*
        vector<int>res;
        int i=0,j=0;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
                nums1[i]=INT_MIN;
                nums1[j]=INT_MIN;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else j++;
        }
        return res;
        */
    
    }
};
