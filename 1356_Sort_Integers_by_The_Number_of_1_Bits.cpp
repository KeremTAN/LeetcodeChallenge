class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int bitCount=0;
        sort(arr.begin(), arr.end());
        multimap<char, int> m;
        for(int& num : arr){
            bitCalculate(num, bitCount);
            m.insert({bitCount, num});
        }
        bitCount=0;
        for(auto it=m.begin(); it!=m.end(); ++it)
            arr[bitCount++]=it->second;
        return arr;
    }
    void bitCalculate(int num, int& bitCount){
        bitCount=0;
        while(num){
            if(num&1) bitCount++;
            num>>=1;
        }
    }
};