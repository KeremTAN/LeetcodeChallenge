class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t;
        for (int ix = 0, i = 0; i < nums.size(); i++)
            if (nums[i] != 0) {
                t = nums[ix];
                nums[ix++]=nums[i];
                nums[i] = t;
            }
    }
};