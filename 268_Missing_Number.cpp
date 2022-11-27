class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sumOfNum=size*(size+1)/2;
        for(int& num : nums)
           sumOfNum-=num;
        return sumOfNum;
    }
};