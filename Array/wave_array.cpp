class Solution{
    public:
    
    void convertToWave(vector<int>& arr, int n){
        
      for(int i=0;i<n-1;i++){
          if(i>n-1 && arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
          if(i>0 && arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
          
      }
    }
};
