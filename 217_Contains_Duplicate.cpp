class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, char> um;
        for(int& n : nums)
            if(++um[n]> 1)
                return 1;
        return 0;
    }
};