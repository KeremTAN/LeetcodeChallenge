class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = INT_MAX, ret = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<min){
                min=nums[i];
            }
            else{
                ret=max(ret,nums[i]-min);
            }
        }
        return ret > 0? ret : -1;
    }
};