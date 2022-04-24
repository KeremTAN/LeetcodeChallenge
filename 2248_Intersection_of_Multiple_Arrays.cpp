class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ret;
        unordered_map<int, int> c;
        for(vector<int>& v : nums)
            for(int& i : v)
                c[i]++;
        ret.reserve(c.size());
        for(auto& it : c)
            if(it.second==nums.size())
                ret.emplace_back(it.first);
        
        sort(ret.begin(), ret.end());
            
        return ret;
    }
};