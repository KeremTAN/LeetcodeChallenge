class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=k, ix=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=1){
               ++count;
            }
            else {
              if(count<k){
                return 0;
              }
              count = 0;
            }
        }
        return 1;
    }
};