//time = O(n*n) , space = O(1)
//best case O(n)
//worst case O(n)

void insertionSort(int n, vector<int> &arr){
  
   for(int i=1;i<n;i++){  //arr[0] is taken as sorted 
       int temp=arr[i];
       int j=i-1;
       for(;j>=0;j--){
           if(arr[j]>temp){
               arr[j+1]=arr[j];
           }
           else{
               break;  
           }
       } arr[j+1]=temp;
   }
}
