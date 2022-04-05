class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff, counter=0;
        vector<int> ret;
        ret.reserve(2);
        map<int, int> ix;
        
        for(int i = 0; i<nums.size(); i++){
            diff = target-nums[i];
            if(diff != nums[i]){
                ix[nums[i]] = (i+1);
                if(ix[nums[i]]>0 && ix[diff]>0){
                    ret.clear();
                    ret.emplace_back(i);
                    ret.emplace_back(ix[diff]-1);
                    return ret;
                }
            }
            else{
                ret.emplace_back(i);
                counter++;
                if(counter==2){
                    return ret;
                }
            }
        }
        
        return ret;
    }
};