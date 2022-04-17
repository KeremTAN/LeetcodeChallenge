class Solution {
public:
    vector<int> setIntersection(unordered_set<int>& s1,unordered_set<int>& s2){
        vector<int> ret;
        ret.reserve(s1.size());
        for(const int& n : s1)
           for(const int& n2 : s2)
               if(n2==n){
                   ret.emplace_back(n);
                   s2.erase(n2);
                   break;
               }
        return ret;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        if(nums1.size()<nums2.size())
            return setIntersection(s1,s2);   
        
        return setIntersection(s2,s1);;
        
    }
};