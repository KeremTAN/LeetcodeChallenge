class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ret{};
        vector<int> memorization(101, 0);
        for(size_t i{}; i<nums.size(); i++){
            ret+=memorization[nums[i]];
            memorization[nums[i]]++;
        }
        return ret;
    }
};