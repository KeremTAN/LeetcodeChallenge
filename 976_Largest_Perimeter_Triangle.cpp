class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0; i<nums.size()-2; i++)
            if(nums[i] < nums[i+1]+nums[i+2])
                return nums[i]+nums[i+1]+nums[i+2];
        return 0;
    }
};