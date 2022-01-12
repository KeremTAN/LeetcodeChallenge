class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int ptr, tmp;
        for(int i=0; i<nums.size(); i++){
            if(i%2 != nums[i]%2){
                ptr=i;
                while(nums[++ptr]%2 == nums[i]%2);
                tmp=nums[ptr];
                nums[ptr]=nums[i];
                nums[i] = tmp;
            }
        }
        return nums;
    }
};