class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int misCount=0, ix=0;
        for(int i=1; i<arr[arr.size()-1]; i++){
            if(arr[ix]==i)
                ix++;
            else misCount++;

            if(misCount==k)
                return i;
        }
        return arr.back()+ (k-misCount);
    }
};