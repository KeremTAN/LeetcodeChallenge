class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size=arr.size(), percent= size/4;
        for(int i=0; i<size-percent; i++)
            if(arr[i]==arr[i+percent])
                return arr[i];
        return -1;
    }
};