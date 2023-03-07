class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ret=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]==nums[j] && i*j%k==0)
                    ret++;
            }
        }
        return ret;
    }
};