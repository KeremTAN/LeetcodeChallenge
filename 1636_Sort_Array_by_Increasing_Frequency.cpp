class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int,  greater<int>> cMap;
        multimap<int, int> m;

        for(int& i : nums)
            cMap[i]++;    
        
        for(const auto& [key, value] : cMap)
            m.insert({value, key});
        
        int ix=0;
        for(auto& it : m){
            for(int i=0; i<it.first; i++){
                nums[ix++]=it.second;
            }
        }
        return nums;
    }
};