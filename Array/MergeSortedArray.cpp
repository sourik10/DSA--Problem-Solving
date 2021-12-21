class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int res[m+n];
        int k=0;
      
      //compare ith element vs jth element 
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res[k]=nums1[i];
                k++;
                i++;
            }
            if(nums1[i]>nums2[j]){
                res[k]=nums2[j];
                k++;
                j++;
            }
        }
      
      //rest element in nums1[]
        while(i<m){
            res[k]=nums1[i];
            k++;
            i++;
        }
      
      //rest element in nums2[]
         while(j<n){
            res[k]=nums2[j];
            k++;
            j++;
        }
    }
};
