class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return isIncrease(nums) || isDescreasing(nums);
    }
    bool isIncrease(vector<int>& nums){
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i])
                return 0;
        }
        return 1;
    }
    bool isDescreasing(vector<int>& nums){
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i])
                return 0;
        }
        return 1;
    }
};