class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
         reverse(arr,arr+d);
         reverse(arr+d,arr+n);
         
         //final reverse of complete a[]
         reverse(arr,arr+n);


    }

    };