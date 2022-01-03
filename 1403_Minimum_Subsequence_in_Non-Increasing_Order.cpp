class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ret;
        int i, j, sum=0, tmp;
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        for (i = 0; i< nums.size(); i++){
            ret.push_back(nums[i]);
            sum += nums[i];
            tmp = 0;
            for (j = i +1; j< nums.size(); j++){
                tmp += nums[j];
                if(tmp > sum)
                    break;
            }
            if (sum > tmp) break;
        }     
        return ret;       
    }
};