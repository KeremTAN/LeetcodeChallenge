class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=-1, j=nums.size(), ret=0;
        while(i<j){
            if(ret<nums[++i]+nums[--j])
                ret=nums[i]+nums[j];
        }
        return ret;
    }
};