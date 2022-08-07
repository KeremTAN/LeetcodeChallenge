class Solution {
public:
    double trimMean(vector<int>& arr) {
        double sum = 0.0;
        int size = arr.size(), i = size*0.05, j = size-i-1;
        sort(arr.begin(), arr.end());
        while(i<j)
            sum+=arr[i++]+arr[j--]; 
        return sum/(size - size*0.1);
    }
};