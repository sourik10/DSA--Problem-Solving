//time = O(n*n),space = O(1)
//already sorted time = O(n)-->bestCase

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){ //round for 1 to n-1
        bool swapped=false;
        for(int j=0;j<n-i;j++){ // process upto n-i
            if(arr[j] > arr[j+1]){
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==false) break;
    }
}
