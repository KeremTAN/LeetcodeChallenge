class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {      
        vector<int> ret;
        std::multimap<vector<int>, int> map;
        int ix = 0;
        for(vector<int>& v : mat) {
            map.insert(make_pair(v, ix++));           
        }
        
        for(auto& a : map){
            ret.push_back(a.second);
            if(--k<1) break;
        }      
        return ret;
        
    }
};