class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int size = arr.size(), ix=1;
        if(size==0) return {};
        vector<int> temp(arr);
        sort(arr.begin(), arr.end());
        unordered_map<int, int> um;
        um[arr[0]]=ix;
        for(int i=1; i<size; i++)
            if(arr[i-1]<arr[i])
                um[arr[i]]=++ix;
            else um[arr[i]]=ix;
        ix=0;
        while(ix<size){
            arr[ix]= um[temp[ix]];
            ix++;
        }
        return arr;
    }
};