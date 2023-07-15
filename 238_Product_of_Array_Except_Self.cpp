class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret(nums.size(), 1);

        for(int i{}; i<nums.size()-1; i++)
            ret[i+1]=ret[i]*nums[i];

        int suffix{1};
        for(int i=nums.size()-1; i>0; i--){
            suffix*=nums[i];
            ret[i-1]*=suffix;
        }
        return ret;
    }
};