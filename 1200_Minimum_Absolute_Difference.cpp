class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ret;
        sort(arr.begin(), arr.end());
        int min=abs(arr[1]-arr[0]);
        ret.push_back({arr[0],arr[1]});
        for(int i=1; i<arr.size()-1; i++){
            if(abs(arr[i+1]-arr[i]) > min){
                continue;
            }
            else if(abs(arr[i+1]-arr[i])==min){
                ret.push_back({arr[i],arr[i+1]});  
            }
            else {
                min=abs(arr[i+1]-arr[i]);
                ret.clear();        
                ret.push_back({arr[i],arr[i+1]});        
            }
        }
        return ret;
    }
};