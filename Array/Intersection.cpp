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
