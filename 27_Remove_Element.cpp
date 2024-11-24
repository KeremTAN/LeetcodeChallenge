class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j{};
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[j++] = std::move(nums[i]); 
            }
        }
        return j;
    }
};