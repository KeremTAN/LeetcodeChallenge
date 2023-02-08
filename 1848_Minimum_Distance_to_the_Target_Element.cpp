class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ret=1000;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==target){
                if(ret>abs(start-i))
                    ret=abs(start-i);
            }
        }
        return ret;
    }
};