class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        unordered_set<int> averages;
        sort(nums.begin(), nums.end());
        while(i<j){
            averages.insert(nums[i++]+nums[j--]);
        }
        return averages.size();
    }
};