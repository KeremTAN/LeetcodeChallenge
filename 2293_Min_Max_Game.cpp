class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int ptr = 0, ix = 0, condition=nums.size();
        
        if(condition==1)
             return nums[0];
        if(condition==2)
            return min(nums[0], nums[1]);
        
        while(1){    
            nums[ptr++] = min(nums[ix++], nums[ix++]);
            nums[ptr++] = max(nums[ix++], nums[ix++]);      
            if(ix>condition-1){
                ptr=0;
                ix=0;
                condition/=2;
                if(condition<2)
                    return nums[0];
            }
        }
        return -1;
    }
};