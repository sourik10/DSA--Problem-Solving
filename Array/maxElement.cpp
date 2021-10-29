class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int res=arr[0];
        for(auto x:arr){
            if(x>res) res=x;
        }
        return res;
    }
};
